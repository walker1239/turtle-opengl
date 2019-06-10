/** @file plano.cpp
@author Walker Manrique
@version Revision 1.1
@brief implementacion de clase plano que permite hacer dibujos usando openGL.
*/

#include "plano.h"
plano::plano(int _w,int _h){
    xini=pla.x;
    yini=pla.y;
    w=_w;
    h=_h;
    //Foto = new foto();
    //care = new caretaker();
}
void plano::forward(int tam){
    glBegin(GL_LINES);
        glVertex2f(pla.x, pla.y);

        pla.y = pla.y + (tam * sin(pla.grados));
        pla.x = pla.x + (tam * cos(pla.grados));
        glVertex2f(pla.x, pla.y);
    glEnd();
    glFlush();
}
void plano::left(t_coord grado){
    grado=grado*(PI/180.0);
    pla.grados+=grado;
}
void plano::right(t_coord grado){
    grado=-grado*(PI/180.0);
    pla.grados+=grado;
}
void plano::set_color(int R,int G, int B){
    pla.R=R;
    pla.G=G;
    pla.B=B;
    glColor3f(R,G,B);
}
void plano::penup(){
    glColor3f(0,0,0);
}
void plano::pendow(){
    set_color(pla.R,pla.G,pla.B);
}
void plano::move(t_coord x,t_coord y){
    pla.x=xini+x;
    pla.y=yini+y;
}
void plano::display(int argc, char **argv){
    
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutInitWindowPosition(200,100);
    
    glutInitWindowSize(w,h);

    glutCreateWindow("window1");
    glClear(GL_COLOR_BUFFER_BIT);
    gluOrtho2D(0,w-1,0,h-1);
    set_color(255,255,255);
    const string w="a=arbol     f=flor     n=nieve     c=clear";
    glRasterPos2d(300,450);
    for (string::const_iterator ii = w.begin();ii != w.end();++ii){
            glutBitmapCharacter(GLUT_BITMAP_9_BY_15,*ii);
    }
    glFlush();
      
}
void plano::clear(){
    set_color(255,255,255);
    glClear(GL_COLOR_BUFFER_BIT);
    const string w="a=arbol     f=flor     n=nieve     c=clear";
    glRasterPos2d(300,450);
    for (string::const_iterator ii = w.begin();ii != w.end();++ii){
            glutBitmapCharacter(GLUT_BITMAP_9_BY_15,*ii);
    }
    glFlush();
}