#include <iostream>
#include <string>
using namespace std;

int DigitoFibonacci(int num)
{
	if (num <= 1) // termina recursividad (se llego a 1 o 0)
		return num;
		
	return DigitoFibonacci(num-1) + DigitoFibonacci(num-2); // (numero ingresado-1) + (numero ingresado-2) recursivo
}

int main()
{
	int digito;
	
	cout << "Digito de Fibonacci a Conocer: ";
	cin >> digito;
	
	int fibonacci = DigitoFibonacci(digito);
	
	cout << "Digito de Fibonacci " << digito << ": " << fibonacci;
	
	return 0;
}
