/** @file Abstract.cpp
@author Walker Manrique
@version Revision 1.1
@brief implementacion de la clase paints para la creacion de paints en Glut OpenGL
*/
#include "Abstract.h"
arbol* paint1::getarbol(){
	arbol* arbols;
    director directors;
    arbols = directors.getbuilder(20,10,5);
    return arbols;
}

flor* paint1::getFlor(){
	int t=6;
	flor *b=new flor_bonita(t);
	return b;
}

nieve* paint1::getnieve(){
	nieve *aux = new nieve(1);
	return aux;
}

arbol* paint2::getarbol(){
	arbol* arbols;
    director directors;
    arbols = directors.getbuilder(20,50,30);
     return arbols;
}

flor* paint2::getFlor(){
	flor *b = new flor_fea(6);
	return b;
}

nieve* paint2::getnieve(){
	nieve *aux = new nieve(2);
	return aux;
}
	
