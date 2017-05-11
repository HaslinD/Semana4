#include "Figura.h"

#ifndef RECTANGULO_H
#define RECTANGULO_H

class Rectangulo : public Figura {
        private:
                double lado, altura;
        public:
                Rectangulo();
                Rectangulo(double, double);
		
		//metodo virtual
                double area();

                double perimetro();

                //mutadores y accesores
                double getLado();
                double getAltura();
                void setLado(double);
                void setAltura(double);
};

#endif
