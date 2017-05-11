#include "Figura.h"

#ifndef CIRCULO_H
#define CIRCULO_H

#define PI 3.14159265

class Circulo : public Figura {
	private:
		double radio;
	
	public:
		Circulo();
		Circulo(double);

		void setRadio(double);
		double getRadio();

		double area();
		double perimetro();

};	

#endif
