/** @file flyweight_nieve.cpp
@author Walker Manrique
@version Revision 1.1
@brief implementacion de la clase paints para la creacion de paints en Glut OpenGL
*/
#include"flyweight_nieve.h"
snow_flyweight* snow_flyweight::instance=0;
snow_flyweight::snow_flyweight(){
    tam = 10;
}
snow_flyweight* snow_flyweight::get_instance(){
    if(instance==0){
        instance=new snow_flyweight();
	}
    return instance;
}
void snow_flyweight::set_tam(int _tam){
    tam=_tam;
}
int snow_flyweight::get_tam(){
    return tam;
}


particles::particles(int _tam){
    snow=snow_flyweight::get_instance();
    snow->set_tam(_tam);
    tam=_tam;
}
particles::~particles(){}
void particles::set_tam(int tam){
    snow->set_tam(5);
}
void particles::set_x_y(int _x,int _y){
    x=_x;
    y=_y;
}
void particles::drawn(plano p){
    p.move(x,y);
    for(int i=0;i<6;i++){
        p.forward(snow->get_tam());
        p.right(120);
        p.forward(snow->get_tam());
        p.left(60);
    }
}



nieve::nieve(int cantidad, int tamano){
    
    for(int i=0;i<cantidad;i++)
        this->add_copo(tamano);
}
nieve::~nieve(){

}
void nieve::drawn(plano p)
{
    p.set_color(255,255,255);
    int tam=v.size();
        for(int i=0;i<tam;i++){
            int x_ = rand() % 700 + (-100);
            int y_ = rand() % 300 + (-200);
            v[i].set_x_y(x_,y_);
            v[i].drawn(p);
        }
        glutPostRedisplay();


}
void nieve::set_cantidad(int _cant){
    cant=_cant;
}
void nieve::add_copo(int tam){
    particles tmp=particles(tam);
    v.push_back(tmp);
}
