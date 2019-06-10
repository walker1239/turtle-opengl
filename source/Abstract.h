/** @file Abstract.h
@author Walker Manrique
@version Revision 1.1
@brief implementacion de la clase paints para la creacion de paints en Glut OpenGL
*/

/**
@mainpage
Se implementa el patron de diseño abstract. para dibujar todo el paint entero.

- Haciendo uso de OpenGL
- Incluyendo la libreria plano para poder realizar estos graficos.

*/

#ifndef ABSTRACT_H
#define ABSTRACT_H

#include<iostream>
#include"flyweight_nieve.h"
#include "builder_arbol.h"
#include "factory_method_flor.h"


/**
* @class   AbstractFactory
* @brief   La clase AbstractFactory contiene funciones para crear todo el paint
* @detail  Se instancia el dato miembro 
*/
class AbstractFactory{
public:
	virtual arbol* getarbol() = 0;
	virtual flor* getFlor() = 0;
	virtual nieve* getnieve() = 0;
	
};

/**
* @class   paint1
* @brief   La clase paint1 es un tipo de paint que tiene a arboles y a flores y tambien niev
* @detail  Se instancia el dato miembro 
*/
class paint1:public AbstractFactory{
public:
	/**La funcion getarbol() es la que me devuelve el arbol.
	*/
	arbol* getarbol();
	/**La funcion getFlor() es la que me devuelve la flor.
	*/
	flor* getFlor();
	/**La funcion getnieve() es la que me devuelve la nieve.
	*/
	nieve* getnieve();
};

/**
* @class   paint2
* @brief   La clase paint2 es un tipo de paint que tiene a arboles y a flores y tambien nieve
* @detail  Se instancia el dato miembro 
*/
class paint2:public AbstractFactory{
public:
	/**La funcion getarbol() es la que me devuelve el arbol.
	*/
	arbol* getarbol();
	/**La funcion getFlor() es la que me devuelve la flor.
	*/
	flor* getFlor();
	/**La funcion getnieve() es la que me devuelve la nieve.
	*/
	nieve* getnieve();;
	
};



#endif // ABSTRACT_H