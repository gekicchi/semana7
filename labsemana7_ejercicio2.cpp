#include <iostream>
#include <string>
#define MAX 3
using namespace std;
int i=0;

float CalcularPromedio(float nums[MAX]) // calculo de promedio con arreglo de floats
{
	float prom = 0;
	
	for (i=0; i<MAX; i++)
		prom += nums[i];
		
	prom /= MAX;
	
	return prom;
}

int main()
{
	float numeros[MAX];
	
	// llenando arreglo
	for (i=0; i<MAX; i++)
	{
		cout << "Ingrese Numero Real: ";
		cin >> numeros[i];
	}
	
	// calculando promedio
	float promedio = CalcularPromedio(numeros);
	
	// mostrar resutado
	for (i=0; i<MAX; i++)
		cout << "Numero" << i+1 << ": " << numeros[i] << endl;
	cout << "Promedio Numeros: " << promedio << endl;
	
	return 0;
}
