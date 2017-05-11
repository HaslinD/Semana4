#include "Circulo.h"
#include <cmath>

Circulo::Circulo(){
	radio = 10;
}

Circulo::Circulo(double radio){
	this -> radio = radio;
}

void Circulo::setRadio(double r){
	radio = r;
}

double Circulo::getRadio(){
	return radio;
}

double Circulo::area(){
	return 2 * PI * pow(radio, 2); 
}

double Circulo::perimetro(){
	return 2 * PI * radio;
}

