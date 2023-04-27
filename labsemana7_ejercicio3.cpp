#include <iostream>
#include <string>
using namespace std;

int TamanoString(string car) // tamaño string
{
	return car.length();
}

int main()
{
	string letritas;
	
	// ingresando string
	cout << "Ingrese Caracteres: ";
	cin >> letritas;
	
	// calculo de tamaño
	int tamano = TamanoString(letritas);
	cout << "String Ingresado: " << letritas << endl;
	cout << "Tamano String: " << tamano << endl;
	
	return 0;
}
