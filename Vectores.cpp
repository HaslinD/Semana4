#include <iostream>
#include <vector>

using namespace std;

int main(){
	//Ejemplo de inicialización
	vector<int> vectorEnteros(10);

	vectorEnteros[0] = 11;

	cout << "Valor de la Primera casilla: " << vectorEnteros[0] << endl
	     << "Vector;" << endl;
	
	cout << "El tamaño de del vector es: " << vectorEnteros.size() << endl
	     << "La capacidad del vector es: " << vectorEnteros.capacity() << endl
	     << "La capacidad máxima " << vectorEnteros.max_size() << endl;

	cout << "----------------------------------------------------------" << endl;
	//ejemplo push-back
	vector<int> vectorEnteros2;
	
	vectorEnteros2.push_back(15);
	
	cout << "Valor del la primera casilla vect2: " << vectorEnteros2[0] << endl
	     << "Vector2;" << endl;
	
	cout << "El tamaño de del vector es: " << vectorEnteros2.size() << endl
             << "La capacidad del vector es: " << vectorEnteros2.capacity() << endl
             << "La capacidad máxima " << vectorEnteros2.max_size() << endl;

	cout << "----------------------------------------------------------" << endl;
	return 0;
}
