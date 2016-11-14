// Malloc y SizeOf.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <stdlib.h>
#include <iostream>
#include <stdio.h>




using namespace std;



int recuperarPosicion(int *inicial, int tama�o, int x, int y)
{
	return *(inicial + (y * tama�o) + x);
}


void main()
{

	try
	{
		int tama�o_matriz = 0;
		cout << "Ingrese tama�o de la matriz";
		printf("");
		cin >> tama�o_matriz;

		//Condicion tama�o matriz
		if ((tama�o_matriz >= 1) && (tama�o_matriz <= 50))
		{
			int * matriz = nullptr;
			int * siguiente_posicion = nullptr;

			//Reserva memoria
			matriz = (int *)malloc(tama�o_matriz * tama�o_matriz * sizeof(int));

			siguiente_posicion = matriz;

			//Ingreso de numeros en matriz
			for (int j = 0; j < (tama�o_matriz * tama�o_matriz); j++)
			{
				*siguiente_posicion = (j + 1);
				siguiente_posicion++;
			}

			//Busqueda matriz por medio de int *
			for (int i = 0; i < tama�o_matriz; i++)
			{
				for (int j = 0; j < tama�o_matriz; j++)
				{
					printf("| %d |", recuperarPosicion(matriz, tama�o_matriz, j, i));
				}
				printf("\n");
			}
			printf("\n");
			printf("\n");


			printf("n=", tama�o_matriz);
			printf("");
			
			// (n/2),(n/2)
			int posicion_a = int((tama�o_matriz) / 2);
			int posicion_b = int((tama�o_matriz) / 2);
			printf("");
			printf("En la posicion(n / 2, n / 2)");
			printf("| %d |", recuperarPosicion(matriz, tama�o_matriz, (posicion_a - 1), (posicion_b - 1)));

			// (1,1)
			printf("\n");
			printf("");
			printf("En la posicion(1, 1)");
			printf("| %d |", recuperarPosicion(matriz, tama�o_matriz, 1, 1));

			// (n,n)
			printf("\n");
			printf("");
			printf("En la posicion(n, n)");
			printf("| %d |", recuperarPosicion(matriz, tama�o_matriz, (tama�o_matriz - 1), (tama�o_matriz - 1)));
			printf("\n");

			// (n/2, 1)
			int posicion_c = int((tama�o_matriz / 2));
			printf("");
			printf("En la posicion(n/2, 1)");
			printf("| %d |", recuperarPosicion(matriz, tama�o_matriz, (posicion_c - 1), 1));
			printf("\n");

			// (n/2, n)
			int posicion_d = int((tama�o_matriz / 2));
			printf("");
			printf("En la posicion(n/2, n)");
			printf("| %d |", recuperarPosicion(matriz, tama�o_matriz, (posicion_d - 1), (tama�o_matriz - 1)));
			printf("\n");
			printf("\n");
			printf("\n");

			system("pause");
		}

		else
		{
			throw exception();
		}
	}

	catch (exception)
	{
		cout << "Error" << endl;
		system("pause");
	}

}
