/** @file main.cpp
@author Walker Manrique 
@version Revision 1.1
@brief implementacion de clase turtle que permite hacer dibujos usando openGL.
*/

#include "plano.h"

int main(int argc, char **argv)
{
    
    plano p(700,500);
    p.display(argc,argv);
    p.forward(70);
    p.left(90);
    p.forward(70);
    p.penup();
    p.forward(70);
    p.left(90);
    p.pendow();
    p.forward(70);
    p.right(30);
    p.move(250,250);
    p.forward(100);
    
    glutMainLoop();

}