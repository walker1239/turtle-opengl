/** @file factory_method_flor.cpp
@author Walker Manrique
@version Revision 1.1
@brief implementacion de la clase flor para la creacion de flores en Glut OpenGL
*/
#include "factory_method_flor.h"

flor_bonita::flor_bonita(int petal){
    petalos = petal;
}
flor_bonita::~flor_bonita(){

}
void flor_bonita::drawn(plano p,int x,int y){
    p.move(x, y);
    for(int i = 0; i < petalos; i++){
        p.left(90);
        p.forward(30);
        p.right(90);
        p.forward(30);
        p.right(90);
        p.forward(30);
        p.right(90);
        p.forward(30);
        p.right(150);
    }
}


flor_fea::flor_fea(int petal){
    petalos = petal;
}
flor_fea::~flor_fea(){

}
    
void flor_fea::drawn(plano p,int x,int y){
    p.move(x, y);
    for(int i = 0; i < petalos; i++){
        p.left(90);
        p.forward(50);
        p.right(90);
        p.forward(50);
        p.right(90);
        p.forward(50);
        p.right(90);
        p.forward(50);
        p.right(150);
    }
}


flor_regular::flor_regular(int petal){
    petalos = petal;
}
flor_regular::~flor_regular(){

}
void flor_regular::drawn(plano p,int x,int y){
    p.move(x, y);
    for(int i = 0; i < petalos; i++){
        p.left(90);
        p.forward(10);
        p.right(90);
        p.forward(10);
        p.right(90);
        p.forward(10);
        p.right(90);
        p.forward(10);
        p.right(150);
    }
}
