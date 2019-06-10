#include "Abstract.h"
plano p;

void teclado(unsigned char key, int x, int y)
{
	AbstractFactory* aux = new paint1();
	arbol* a = aux->getarbol();
	flor* f = aux->getFlor();
	nieve* n = aux->getnieve();
	int _x,_y;
	for(int i=0;i<100;i++)
  	  	n->add_copo(10);
   switch (key)
  {
  case 27:             // ESCAPE key
	  exit (0);
	  break;
  case 'a':
  	  cout<<"ingresa coordenadas"<<endl;
  	  cin>>_x>>_y;
	  a->drawn(p,_x,_y);
	  break;
  case 'f':
  	  cout<<"ingresa coordenadas"<<endl;
  	  cin>>_x>>_y;
      f->drawn(p,_x,_y);
	  break;
  case 'n':
	  n->drawn(p);
	  break;
  case 'c':
	  p.clear();
	  break;
  }
}
void Pantalla(){

}
int main(int argc, char **argv){
	p=plano(700,500);
    p.display(argc,argv);
    glutKeyboardFunc(*teclado);
    glutDisplayFunc(Pantalla);
	/*AbstractFactory* aux = new paint1();
	arbol* a = aux->getarbol();
	flor* f = aux->getFlor();
	nieve* n = aux->getnieve();
	//n->drawn(p);
	a->drawn(p,300,100);
	f->drawn(p,100,100);
	//n->drawn(p);

	AbstractFactory* aux1 = new paint2();
	arbol* a1 = aux1->getarbol();
	flor* f1 = aux1->getFlor();
	nieve* n1 = aux1->getnieve();

	f1->drawn(p,300,100);
	a1->drawn(p,100,100);*/
	//while(1);
		//system("pause");

	glutMainLoop();
	return 0;
}
/*
doxygen -g sample_text.conf

doxygen sample_text.conf

cd html

google-chrome index.html

g++ -g -Wall main.cpp plano.cpp flyweight_nieve.cpp builder_arbol.cpp factory_method_flor.cpp Abstract.cpp -lopengl32 -lglu32 -lfreeglut
*/