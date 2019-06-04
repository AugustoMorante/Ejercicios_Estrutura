
#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

typedef struct {
	char sexo;
	int dia;
	int mes;
	int anio;
} persona;

int main()
{
	char s;
	int mes, a, d ;
	int c;
	persona *Vdatos;
	Vdatos = new persona[50];
	for (int i = 0; i < 50; i++)
	{
		c = 0;
		cout << endl;
		while (c < 1)
		{
			cout << "Ingrese sexo persona " << i + 1 << ": "; cin >> Vdatos[i].sexo;
			if (Vdatos[i].sexo == 'M' || Vdatos[i].sexo == 'm' || Vdatos[i].sexo == 'F' || Vdatos[i].sexo == 'f')
			{
				c++;
			}
		}
			
		do
		{
			cout << "Ingrese dia nacimiento persona " << i + 1 << ": "; cin >> Vdatos[i].dia;
		} while (Vdatos[i].dia < 0 || Vdatos[i].dia > 31);
		do
		{
			cout << "Ingrese mes nacimiento persona " << i + 1 << ": "; cin >> Vdatos[i].mes;
		} while (Vdatos[i].mes < 0 || Vdatos[i].mes > 12);

		cout << "Ingrese anio nacimiento persona " << i + 1 << ": "; cin >> Vdatos[i].anio;
	}
	cout << endl;
	cout << "Inserte mes: "; cin >> mes;
	if (mes == 0)
	{
		cout << endl;
	}
	else
	{
		for (int i = 49; i >= 0; i--)
		{
			if (mes == Vdatos[i].mes)
			{
				s = Vdatos[i].sexo;
				d = Vdatos[i].dia;
				a = Vdatos[i].anio;
				cout << "Persona " << i + 1 << ": " << endl;
				cout << "Sexo: " << s << endl;
				cout << "Dia: " << d << endl;
				cout << "Anio: " << a << endl;
			}
		}
	}
	_getch();
    return 0;
}

