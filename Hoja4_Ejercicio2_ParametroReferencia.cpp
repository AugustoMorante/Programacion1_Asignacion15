#include "pch.h"
#include <iostream>
#include <conio.h>
using namespace std;

void presentacion()
{
	cout << "------------------\n";
	cout << "      MAPFE       \n";
	cout << "------------------\n";
	cout << endl;
	return;
}


int verificarSexo(char &s)
{
	int i;
	if (s == 'M' || s == 'm' || s == 'F' || s == 'f')
	{
		i = 1;
	}
	else
	{
		i = 0;
	}
	return i;
}

int precioSeguro(char &x, int &y)
{
	int pago;
	if (x == 'M' || x == 'm')
	{
		if (y < 25)
		{
			pago = 1000;
		}
		else
		{
			pago = 700;
		}
	}
	else
	{
		if (y < 21)
		{
			pago = 800;
		}
		else
		{
			pago = 500;
		}
	}
	return pago;
}

int main()
{
	char sexo;
	int edad;
	int i;
	presentacion();
	do {
		cout << "Inserte su sexo: " << endl;
		cin >> sexo;
		i = verificarSexo(sexo);
	} while (i == 0);
	cout << endl;
	do
	{
		cout << "Inserte su edad: " << endl;
		cin >> edad;
	} while (edad < 18);
	cout << endl;
	cout << "Usted debe pagar " << precioSeguro(sexo, edad) << " soles." << endl;
	_getch();
}