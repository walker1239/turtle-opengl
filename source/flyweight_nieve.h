/** @file flyweight_nieve.h
@author Walker Manrique
@version Revision 1.1
@brief implementacion de la clase paints para la creacion de paints en Glut OpenGL
*/

/**
@mainpage
Se implementa el patron de diseño flyweight para la creacion de nieve.

- Haciendo uso de OpenGL
- Incluyendo la libreria plano para poder realizar estos graficos.

*/

#ifndef FLYWEIGHT_NIEVE_H
#define FLYWEIGHT_NIEVE_H
#include <iostream>
#include "plano.h"
#include <stdlib.h>     /* srand, rand */
#include <time.h>      
#include <vector> 
using namespace std;
/**
* @class   snow_flyweight
* @brief   La clase snow_flyweight es el singleton que dibuja la nieve.
* @detail  Se instancia el dato miembro 
*/
class snow_flyweight
{
private:
    int tam;
/** Constructor.
 */
    snow_flyweight();
    
public:
    static snow_flyweight* instance;
/** La funcion get_instance devuelve la nieve en singleton.
 */
    static snow_flyweight* get_instance();
/** La funcion set_tam le da un tamaño a la nieve.
 * @param _tam es el tamño que le das a la nieve
 */
    void set_tam(int _tam);
/** La funcion get_tam devuelve el tamaño de la nieve.
 */
    int get_tam();
    
};

/**
* @class   particles
* @brief   La clase particles es la calse que dibuja solo una particula.
* @detail  Se instancia el dato miembro 
*/

class particles
{
private:
    int tam;
    snow_flyweight *snow;
    int x,y;
public:
/** Constructor.
 *  @param _tam es el tamaño del copo de nieve.
 */
    particles(int _tam);
/** Destructor.
 */
    ~particles();
/** La funcion set_tam le da un tamaño a la nieve.
 * @param _tam es el tamño que le das a la nieve
 */
    void set_tam(int tam);
/** La funcion set_x_y le da unas coordenadas a la nieve.
 * @param _x,_y son las coordenadas x, y respectivamente.
 */
    void set_x_y(int _x,int _y);
/** La funcion drawn recibe el plano y se dibujará en las coordenadas ya establecidas.
 *  @param p nos permite hacer uso de la tortuga.
 */    
    void drawn(plano p);
    
};

/**
* @class   nieve
* @brief   La clase nieve es la clase que crea las particulas de nieve.
* @detail  Se instancia el dato miembro 
*/
class nieve 
{
private:
    int cant;
    int gravedad;
    vector<particles> v;
public:
/** Constructor.
 *  @param tam es el tamaño de cada copo de nieve.
 *  @param cantidad es la cantidad de nieve que sera creada.
 */
    nieve(int cantidad=3,int tam=5);
/** Destructor.
 */
    ~nieve();
/** La funcion draw dibuja recibiento el plano en el que dibujar toda la nieve, en coordenadas aleatorias.
 *  @param p es el plano en el que se dibujara.
 */
    void drawn(plano p);
/** La funcion set_cantidad define la cantidad de copos de nieve que habra en el plano.
 *  @param _cant la cantidad de copos de nieve.
 */
    void set_cantidad(int _cant);
/** La funcion add_copo añade un copo al vector de copos de nieve.
 *  @param tam es el tamaño de la punta del copo.
 */
    void add_copo(int tam);
};

#endif