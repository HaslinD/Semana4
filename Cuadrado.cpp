#include "Cuadrado.h"
#include "cmath"

Cuadrado::Cuadrado(){
	this -> setLado(10);
	this -> setAltura(10);
}

Cuadrado::Cuadrado(double lado):Rectangulo(lado, lado){
        
}

void  Cuadrado::setLado(double lado){ 
	this -> setLado(lado);
	this -> setAltura(lado);
}

