// ConsoleApplication4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>

using namespace std;

void menu() {

	cout << "OPCIONES" << endl;
	cout << "Aniadir una ficha nueva [1]" << endl;
	cout << "Ver la Informacion de todas las fichas [2]" << endl;
	cout << "Buscar Ficha de cierto Tipo [3]" << endl;
	cout << "Finalizar [4]" << endl;

	return;
}

typedef struct
{
	char categoria;
	int edad;
} datosPersonal;

int main()
{
	datosPersonal *Personal;
	Personal = new datosPersonal[10];
	
	for (int i = 0; i < 5; i++)
	{
		cout <<"Trabajador "<< i + 1 << " Ingrese categoria " << ": "; cin >> Personal[i].categoria;
		cout << "Ingrese edad "  << ": "; cin >> Personal[i].edad;
		
	}

	char tipo;

	cout << "Ingrese categoria buscar " << endl;
	cin >> tipo;

	for (int i=0;i < 5 ;i++) {

		if (Personal[i].categoria == tipo)
		{
			cout<<"Empleado "<<i+1 << " Categoria : "<< ": " << Personal[i].categoria << endl;
			cout<< "Edad : " << ": " << Personal[i].edad << endl;
			
		}
	}
	_getch();
}

