// ConsoleApplication3.cpp : Defines the entry point for the console application.
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
	char tipo;
	int anchoPixel;
	int altoPixel;
	float tamanio;
} datosImagen;

int main()
{
	datosImagen *Imagen;
	Imagen = new datosImagen[100];

	int opcion;
	int i = 0;

	do
	{
		
	menu();

	cin >> opcion;

	if (opcion==1)
	{
		
		cout << "Ingrese tipo de imagen " << i + 1 << ": "; cin >> Imagen[i].tipo;
		cout << "Ingrese ancho de pixel " << i + 1 << ": "; cin >> Imagen[i].anchoPixel;
		cout << "Ingrese alto de pixel " << i + 1 << ": "; cin >> Imagen[i].altoPixel;
		cout<< "Ingrese tamanio en kb " << i + 1 << ": "; cin >> Imagen[i].tamanio;

		i++;
	}

	if (opcion==2)
	{
		for ( i-- ;i >= 0;i--) {
			cout<<"Tipo Imagen: "<<i+1<<": " << Imagen[i].tipo << endl;
			cout<<"Ancho Pixel: "<<i+1<<": " << Imagen[i].anchoPixel << endl;
			cout<<"Alto Pixel: "<<i+1<<": " << Imagen[i].altoPixel << endl;
			cout<<"Tamanio en kb"<<i+1<<": " << Imagen[i].tamanio << endl;
		}
	}

	if (opcion == 3)
	{
		char tipo;
	
		cout << "Ingrese Tipo de imagen" << endl;
		cin >> tipo;

		for (i--;i >= 0;i--) {

			if (Imagen[i].tipo==tipo)
			{
				cout << "Tipo Imagen: " << i + 1 << ": " << Imagen[i].tipo << endl;
				cout << "Ancho Pixel: " << i + 1 << ": " << Imagen[i].anchoPixel << endl;
				cout << "Alto Pixel: " << i + 1 << ": " << Imagen[i].altoPixel << endl;
				cout << "Tamanio en kb" << i + 1 << ": " << Imagen[i].tamanio << endl;
			}
		}
	}

	} while (opcion!=4);
	
    _getch();
}

