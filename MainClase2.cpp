#include "Figura.h"
#include "Rectangulo.h"
#include "Circulo.h"
#include "Cuadrado.h"
#include <iostream>

using namespace std;

int main(){
	cout << endl;
	//herencia
	Figura figura;
	Rectangulo rectangulo(10, 20);
	cout << "Area Figura: " << figura.area() << endl << "Area Rectangulo: " << rectangulo.area() << endl;
	
	Circulo circulo(5);
	cout << "Area Circulo: " << circulo.area() << endl;

	Cuadrado cuadrado(10);
	cout << "Area Circulo: " << cuadrado.area() << endl;

	//
	Figura* figure1 = new Figura();
	Figura* figure2 = new Rectangulo(30, 40);
	Figura* figure3 = new Circulo(100);
	Figura* figure4 = new Cuadrado(40);

	cout << "___________________________________________________________" << endl << endl;
	cout << "Área Rectángulo: " << figure2 -> area() << endl;
	
	//liberar memoria
	delete figure1;
	delete figure2;
	delete figure3;
	delete figure4;
	cout << endl;	
	return 0;
}
