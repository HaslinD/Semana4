#include <iostream>

#ifndef MICLASE_H
#define MICLASE_H

class MiClase {
	private:
		int* pointer;
		int size;
	
	public:
	  	MiClase(); //ctor por defecto
		MiClase(int); //retorna el valor de una casilla

		int get(int); //rerorna el valor de una casilla
		void set(int, int); //establece el valor indicado en la casilla ind.
		
	~MiClase();	
};

#endif
