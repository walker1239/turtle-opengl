/** @file builder_arbol.cpp
@author Walker Manrique
@version Revision 1.1
@brief implementacion de la clase arbol para la creacion de arboles en Glut OpenGL
*/

#include "builder_arbol.h"

void tronco::drawn(plano p,int x, int y){   
    p.forward(size);
    p.right(90);
    p.forward(size);
    p.right(90);
    p.forward(size);
    p.right(90);
    p.forward(size);
    p.right(90);
}


void hoja::drawn(plano p,int x, int y){
    p.forward(size);
    p.right(90);
    p.forward(size);
    p.right(90);
    p.forward(size);
    p.right(90);
    p.forward(size);
    p.right(90);
}

void rama::drawn(plano p,int x, int y)
{
    p.forward(size);
    p.right(90);
    p.forward(size);
    p.right(90);
    p.forward(size);
    p.right(90);
    p.forward(size);
    p.right(90);
}
void arbol::drawn(plano p,int x, int y){
    p.move(x,y);
    hojas->drawn(p,x,y);
    troncos->drawn(p,x,y);
    ramas->drawn(p,x,y);
}


void arbol_normal::settronco(int size){
    troncos = new tronco();
    troncos->size=size;
}
void arbol_normal::sethojas(int size){
    hojas = new hoja();
    hojas->size=size;
}
void arbol_normal::setramas(int size){
    ramas = new rama();
    ramas->size=size;
}
tronco* arbol_normal::gettronco(){
    return troncos;
}
hoja* arbol_normal::gethojas(){
    return hojas;
}
rama* arbol_normal::getramas(){
    return ramas;
}


void director::setbuilder(builder* newbuilder){
    _builder = newbuilder;
}

arbol* director::getbuilder(int a, int b, int c){
    arbol* arbols = new arbol();
    arbol_normal* bt = new arbol_normal();
    bt->setramas(a);
    bt->settronco(b);
    bt->sethojas(c);
    arbols->troncos = bt->gettronco();
    arbols->hojas = bt->gethojas();
    arbols->ramas = bt->getramas();


    return arbols;
}

arbol* director::getarbol(){
    arbol* arbols = new arbol();

    arbols->troncos = _builder->gettronco();

   

    arbols->hojas = _builder->gethojas();
    arbols->ramas = _builder->getramas();

    return arbols;
}

