/** @file factory_method_flor.h
@author Walker Manrique
@version Revision 1.1
@brief implementacion de la clase flor para la creacion de flores en Glut OpenGL
*/

/**
@mainpage
Usando el patron de diseño factory method permitimos crear distintos tipo de flores que se ajusten al gusto de cada uno. Ademas, al ser un patron de diseño se le puede incorporar mas tipos de flores sin necesidad de modifcar todo el codigo.

- Haciendo uso de OpenGL
- Incluyendo la libreria plano para poder realizar los graficos.

*/

#ifndef FACTORY_METHOD_FLOR_H
#define FACTORY_METHOD_FLOR_H
#include <iostream>
#include <string>
#include "plano.h"


/**
* @class   flor
* @brief   La clase flor contiene la funcion drawn para poder dibujarlo en pantalla
* @detail  Se instancia el dato miembro 
*/
class flor{
protected:
    int petalos;

public:
/** drawn.
    La funcion drawn es virtual para que sus hijas puedan sobreescribirla de acuerdo a lo que cada una quiera.
*/
    virtual void drawn(plano T,int x,int y) = 0;
};

/**
* @class   flor_bonita
* @brief   La clase flor_bonita es un tipo de flor en la que su dibujo es bonito,contiene la funcion drawn para poder visualizarlo, hereda de la clase flor
* @detail  Se tiene constructor y destructor
*/
class flor_bonita:public flor{
public:
/** Constructor.
 *  @param n_petalos es la cantidad de petalos que tiene la flor.
 */
    flor_bonita(int n_petalos);
/** Destructor
 */
    ~flor_bonita();
/** La funcion drawn recibe el plano y las coordenadas donde se dibujará.
 *  @param p, nos permite hacer uso de la tortuga.
 *  @param x es la coordenada x en la que se dibujará.
 *  @param y es la coordenada y en la que se dibujará.
 */
    void drawn(plano p,int x,int y);
    
};

/**
* @class   flor_fea
* @brief   La clase flor_fea es un tipo de flor en la que su dibujo es feo,contiene la funcion drawn para poder visualizarlo, hereda de la clase flor
* @detail  Se instancia el dato miembro 
*/
class flor_fea :public flor{
public:
/** Constructor.
 *  @param n_petalos es la cantidad de petalos que tiene la flor.
 */
    flor_fea(int n_petalos);
/** Destructor
 */
    ~flor_fea();
/** La funcion drawn recibe el plano y las coordenadas donde se dibujará.
 *  @param p, nos permite hacer uso de la tortuga.
 *  @param x es la coordenada x en la que se dibujará.
 *  @param y es la coordenada y en la que se dibujará.
 */
    void drawn(plano p,int x,int y);
    
};

/**
* @class   flor_regular
* @brief   La clase flor_regular es un tipo de flor en la que su dibujo es flor_regular,contiene la funcion drawn para poder visualizarlo, hereda de la clase flor
* @detail  Se instancia el dato miembro 
*/
class flor_regular:public flor{
public:
/** Constructor.
 *  @param n_petalos es la cantidad de petalos que tiene la flor.
 */
    flor_regular(int n_petalos);
/** Destructor
 */
    ~flor_regular();
/** La funcion drawn recibe el plano y las coordenadas donde se dibujará.
 *  @param p, nos permite hacer uso de la tortuga.
 *  @param x es la coordenada x en la que se dibujará.
 *  @param y es la coordenada y en la que se dibujará.
 */
    void drawn(plano p,int x,int y);
    
};

#endif // FACTORY_METHOD_FLOR_H