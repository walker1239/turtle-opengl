/** @file builder_arbol.h
@author Walker Manrique
@version Revision 1.1
@brief implementacion de la clase arbol para la creacion de arboles en Glut OpenGL
*/

/**
@mainpage
Se implementa el patron de diseño builder, ya que queremos hacer miles de combinaciones de un arbol y dinujarla.

- Haciendo uso de OpenGL
- Incluyendo la libreria plano para poder realizar estos graficos.

*/
#ifndef BUILDER_ARBOL_H
#define BUILDER_ARBOL_H
#include <iostream>
#include <string>
#include "plano.h"


/**
* @class   tronco
* @brief   La clase tronco contiene la funcion drawn para poder dibujarlo
* @detail  Se instancia el dato miembro 
*/
class tronco{
public:
    int size;
/** La funcion drawn recibe el plano y las coordenadas donde se dibujará.
 *  @param p, nos permite hacer uso de la tortuga.
 *  @param x es la coordenada x en la que se dibujará.
 *  @param y es la coordenada y en la que se dibujará.
 */
    void drawn(plano p,int x, int y);
};

/**
* @class   hoja
* @brief   La clase hoja contiene la funcion drawn para poder dibujará
* @detail  Se instancia el dato miembro 
*/
class hoja{
public:
    int size;
/** La funcion drawn recibe el plano y las coordenadas donde se dibujará.
 *  @param p, nos permite hacer uso de la tortuga.
 *  @param x es la coordenada x en la que se dibujará.
 *  @param y es la coordenada y en la que se dibujará.
 */
    void drawn(plano p,int x, int y);
};

/**
* @class   rama
* @brief   La clase rama contiene la funcion drawn para poder dibujará.
* @detail  Se instancia el dato miembro 
*/
class rama{
public:
    int size;
/** La funcion drawn recibe el plano y las coordenadas donde se dibujará.
 *  @param p, nos permite hacer uso de la tortuga.
 *  @param x es la coordenada x en la que se dibujará.
 *  @param y es la coordenada y en la que se dibujará.
 */
    void drawn(plano p,int x, int y);
};

/**
* @class   arbol
* @brief   La clase arbol contiene la funcion drawn para visualizar el arbol
* @detail  Se instancia los datos miembros que son punteros a las partes del arbol
*/
class arbol{
public:
    tronco*   troncos;
    hoja* hojas;
    rama*   ramas;
/** La funcion drawn recibe el plano y las coordenadas donde se dibujará.
 *  @param p, nos permite hacer uso de la tortuga.
 *  @param x es la coordenada x en la que se dibujará.
 *  @param y es la coordenada y en la que se dibujará.
 */
    void drawn(plano p,int x, int y);
};

/**
* @class   builder
* @brief   La clase builder contiene las funciones gettronco, gethojas, getramas para obtener las caracteristicas del arbol en sus clases hijas
* @detail  Las funciones son virtual-puras y apuntan a las clases de las partes del arbol
*/
class builder{
public:
/** La funcion gettronco es virtual pura para que pueda ser heredada, utilizada y sobrescrita por las demas clases.
 */
    virtual tronco* gettronco() = 0;
/** La funcion gethojas es virtual pura para que pueda ser heredada, utilizada y sobrescrita por las demas clases.
 */
    virtual hoja* gethojas() = 0;
/** La funcion getramas es virtual pura para que pueda ser heredada, utilizada y sobrescrita por las demas clases.
 */
    virtual rama* getramas() = 0;
};

/**
* @class   arbol_normal
* @brief   La clase arbol_normal hereda del arbol, estes es un arbol normal y unico. Tambien puede ser modificado.
* @detail  Las funciones apuntan a las clases de las partes del arbol, asi como tambien son void.
*/
class arbol_normal : public builder{

public:
    tronco* troncos;
    hoja* hojas;
    rama* ramas;
/** La funcion settronco recibe el tamano.
 *  @param size, nos permite definir el tamano pedido.
 */
    void settronco(int size);
/** La funcion sethojas recibe el tamano.
 *  @param size, nos permite definir el tamano pedido.
 */
    void sethojas(int size);
/** La funcion setramas recibe el tamano.
 *  @param size, nos permite definir el tamano pedido.
 */
    void setramas(int size);
/** La funcion gettronco es un puntero a tronco, nos permite obtener las caracteristicas de este.
 */
    tronco* gettronco();
/** La funcion gethojas es un puntero a tronco, nos permite obtener las caracteristicas de este.
 */
    hoja* gethojas();
/** La funcion getramas es un puntero a tronco, nos permite obtener las caracteristicas de este.
 */
    rama* getramas();
};

/**
* @class   director
* @brief   La clase director es la que crea mediante el builder o mediante parametros.
*/
class director{
private:
    builder* _builder;

public:
/** La funcion setbuilder declara el builder que posteriormente el director devolvera.
 *  @param newbuilder es un builder definido antes que posteriormente se devolvera como un arbol.
 */
    void setbuilder(builder* newbuilder);
/** La funcion getbuilder recibe el tamaño de troncos, hojas, ramas, para crear el arbol.
 *  @param troncos es el tamaño del tronco.
 *  @param hojas es el tamaño de las hojas.
 *  @param ramas es el tamaño de las ramas.
 */
    arbol* getbuilder(int troncos, int hojas, int ramas);
/** La funcion getarbol es la que nos devuelve el arbol creado.
 */
    arbol* getarbol();
};


#endif // BUILDER_ARBOL_H