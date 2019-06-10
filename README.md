Turtle openGL
=========

## Description
Implementation of python turtle in Opengl c++

## Compile

### Install glut(Ubuntu):

	sudo apt install build-essential ubuntu-restricted-extras cimg-dev freeglut3-dev libgles2-mesa-dev
  	sudo apt install g++
  	sudo apt-get install freeglut3-dev

### Finally execute(Ubuntu):

	g++ main.cpp plano.cpp flyweight_nieve.cpp builder_arbol.cpp factory_method_flor.cpp Abstract.cpp -o gl -lGL -lGLU -lglut
  	./gl

### Finally execute(Windows):

	g++ -g -Wall main.cpp plano.cpp flyweight_nieve.cpp builder_arbol.cpp factory_method_flor.cpp Abstract.cpp -lopengl32 -lglu32 -lfreeglut
  	a.exe

## Struct of the coordenadas
```c++
struct coordenada{
    t_coord x,y;
    int R,G,B;
    t_coord grados;
};
```

## Struct of the plano

```c++
class plano{
    private:
    coordenada pla;
    t_coord xini,yini;
    int h,w;
    }
```
## Rotate
  - Calculate new coordinates with:
  ```
  y = y + (tam * sin(grados));
  x = x + (tam * cos(grados));
  ```
## Authors
- [Walker Fernando Manrique Chalco](https://github.com/walker1239)
