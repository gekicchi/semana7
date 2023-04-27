#include <iostream>
#include <string>
#include <cstring>
#define MAX 50
using namespace std;

bool EsPalindrome(char palabra[MAX], int start, int end)
{
	if (palabra[start] != palabra[end]) // las letras revisadas son distintas
		return false;
	else if (start == end || start == end-1) // la posicion a comprobar es la misma o tienen una separacion de 1
		return true;
		
	return EsPalindrome(palabra, start+1, end-1); // se revisa la siguiente posicion desde el inicio y la anterior posicion desde el final
}

int  main()
{
	char palabra[MAX];
	cout << "Ingrese Palabra u Oracion sin Espacios (minuscula): ";
	cin >> palabra;
	
	bool palindrome = EsPalindrome(palabra, 0, strlen(palabra)-1);
	
	if (palindrome) // true
		cout << palabra << " es Palindrome" << endl;
	else // false
		cout << palabra << " no es Palindrome" << endl;
	
	return 0;
}
