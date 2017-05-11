#include "Rectangulo.h"

#ifndef CUADRADO_H
#define CUADRADO_H

class Cuadrado : public Rectangulo {
	private: 
		double lado;
	public:
		Cuadrado();
		Cuadrado(double);

		void setLado(double);

};

#endif
