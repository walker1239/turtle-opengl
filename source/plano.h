/** @file plano.h
@author Walker Manrique
@version Revision 1.1
@brief implementacion de clase plano que permite hacer dibujos usando openGL.
*/

/**
@mainpage
El codigo esta estructurado para que se use como la tortuga original de python.
el algoritmo usa calculos matematicos basicos. 

*/
#ifndef PLANO_H
#define PLANO_H

#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <stdio.h>
#include <math.h>
#include <string>
using std::string;
#include <sstream>
//#include "foto.h"
//#include "caretaker.h"

#define PI 3.1415926535897932384626433832795
typedef double t_coord; 

struct coordenada{
    t_coord x,y;
    int R,G,B;
    t_coord grados;
    coordenada(){
        x=250;
        y=250;
        R=G=255;
        B=0;
        grados=0;
    }
};

/**
* @class   plano
* @brief   La clase plano tiene los elementos basicos para empezar a dibujar como se hace en la python turtle.
* @detail  Definicion de la funciones usadas en la clase.
*/

class plano{
    private:
    coordenada pla;
    t_coord xini,yini;
    //foto* Foto;
    //caretaker* care;
    int h,w;
    public:
    /** Crear la turtle.
    *por defecto se crea con w1=500 y h
 *  @param width, height coordinan el tamano del plano en el que se dibujara.
 */
    plano(int width = 500,int height = 500);

/** Avanzar respecto al punto medio del plano.
 *  @param cantidad es la cantidad de pixeles que se avanzará.
 */
    void forward(int cantidad);

/** Gira a la izquierda los grados que reciba respecto al punto en el que estes.
 *  @param grado, es la cantidad que se girara.
 */
    void left(t_coord grado);

/** Gira a la derecha los grados que reciba respecto al punto en el que estes.
 *  @param grado, es la cantidad que se girara.
 */
    void right(t_coord grado);

/** Define el color con el que se dibujara usa el formato RGB, que puede ir de 0-255.
 *  @param R, G, B inicializan el color de tipo RGB.
 */
    void set_color(int R,int G, int B);

/** La tortuga deja de pintar.
 */
    void penup();

/** La tortuga vuelve a pintar.
 */
    void pendow();

/** Mueve la tortuga hace la coordenada (x, y).
 *  @param x, y funcionan como coordenadas.
 */
    void move(t_coord x,t_coord y);

/** Muestra la ventana.
 *  @param argc, argv es necesario para la funcion glutopemGl.
 */
    void display(int argc, char **argv);

/** Limpia la ventana con fondo negro.
 */
    void clear();
};

#endif //PLANO_H