#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;
using namespace System;

int main()
{
	int *monto_inicial,*cant_5,*cant_2,*cant_1;
	monto_inicial = new int;
	cant_5 = new int;
	cant_2 = new int;
	cant_1 = new int;

	cout<<"Ingrese el monto inicial: ";
	cin >> *monto_inicial;

	*cant_5 = *monto_inicial / 5;
	*cant_2 = (*monto_inicial % 5) / 2;
	*cant_1 = ((*monto_inicial % 5) % 2) / 1;
	cout << "cantidad de monedas de 5 soles: "<<*cant_5;
	
	cout << "\n";

	cout << "Pulse una tecla para salir...";
	




	_getch();
	return 0;
}