/** @file main.cpp
@author Walker Manrique 
@version Revision 1.1
@brief implementacion de clase turtle que permite hacer dibujos usando openGL.
*/

#include "plano.h"

void cachito(plano &p,int tam){
     if(tam==1)
          return;
     p.forward(tam/3);
     //cachito(p,tam/3);
     p.right(120);
     p.forward(tam/3);
     p.left(60);
}
int main(int argc, char **argv)
{
    
    plano p(500,500);
    p.display(argc,argv);

    /*for(int i=0;i<360;i++){
     p.forward(2);
     p.right(1);
         }*/

    for(int i=0;i<6;i++){
    cachito(p,100);
     }
    //p.move(250,250);
     /*p.forward(20);
    p.left(60);
    p.forward(20);
    p.right(120);
    p.forward(20);
    p.left(60);
    p.forward(20);
    p.right(120);
    p.forward(20);
    p.left(60);
    p.forward(20);
    p.right(120);
    p.forward(20);
    p.left(60);
    p.forward(20);
    p.right(300);*/
    //p.forward(100);
    glutMainLoop();

}