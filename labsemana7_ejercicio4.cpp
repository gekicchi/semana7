#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

struct Numero{
	float valor;
	struct Numero *next;
};

struct Numero* CrearNumero(float val) // crear estructura numero
{
	struct Numero *newNumero = (struct Numero*)malloc(sizeof(struct Numero));
	newNumero->valor = val;
	newNumero->next = NULL;
	
	return newNumero;
}

void AnadirNumero(struct Numero **head, struct Numero *num) // añadir numero a lista
{
	if (*head == NULL)
		*head = num;
	else
	{
		struct Numero *current = *head;
		while (current->next != NULL)
			current = current->next;
		
		current->next = num;
	}
}

void ImprimirNumeros(struct Numero *head) // mostrar lista de numeros
{
	struct Numero *current = head;
	while (current != NULL)
	{
		cout << "Numero: " << current->valor << endl;
		current = current->next;
	}
}

void FreeNumeros(struct Numero *head) // liberacion de memoria
{
	struct Numero *current = head;
	while (current != NULL)
	{
		struct Numero *next = current->next;
		free(current);
		current = next;
	}
}

void Operaciones(struct Numero *head, float *sum, float *mult, float *prom) // realiza todas las operaciones a la vez usando punteros
{
	if (head == NULL)
		return;
	else
	{
		struct Numero *current = head;
		int cant=0;
		while(current != NULL)
		{
			*sum += current->valor;
			*mult *= current->valor;
			cant++;
			
			current = current->next;
		}
		
		*prom = *sum / cant;
	}
}

int main()
{
	struct Numero *head = NULL;
	int eleccion=0;
	float numero;
	float suma = 0, multi = 1, prom = 0;
	
	do{ // ingresando numeros a lista
		cout << "Ingrese Numero Real: ";
		cin >> numero;
		struct Numero *Numerito = CrearNumero(numero);

		AnadirNumero(&head, Numerito);

		cout << endl << "Seguir Ingresando Numeros?" << endl << "[1] Si\t[2] No" << endl;
		do{
			cout << "Eleccion: ";
			cin >> eleccion;
		} while (eleccion < 1 || eleccion > 2);
		cout << endl;
		
	} while (eleccion != 2);
	
	Operaciones(head, &suma, &multi, &prom);
	
	// muestra de operaciones
	ImprimirNumeros(head);
	cout << "Suma de Numeros Ingresados: " << suma << endl;
	cout << "Multiplicacion de Numeros Ingresados: " << multi << endl;
	cout << "Promedio de Numeros Ingresados: " << prom << endl;
	
	FreeNumeros(head);
	return 0;
}
