#include <iostream>
#include <string>
using namespace std;

int CalculoFactorial(int num)
{
	if (num == 1) // termino de recursividad (se llego al 1)
		return 1;
	
	return num * CalculoFactorial(num-1); // numero ingresado por numero-1 recursivo
}

int main()
{
	int numero;
	do{
		cout << "Ingrese Numero a Calcular Factorial: ";
		cin >> numero;
		if (numero < 1)
			cout << "NO NUMEROS MENORES A 1" << endl;
	} while (numero < 1);
	
	int factorial = CalculoFactorial(numero);
	
	cout << "Factorial: " << factorial << endl;
	
	return 0;
}
