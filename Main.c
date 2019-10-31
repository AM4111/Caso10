#include <stdio.h>
#include <stdlib.h>

#include "matroid.h"

int main(){

	int opcion_menu = 0;
	int funcion = 0;
	do
	{
		cout << "\n|-------------------------------------|";
		cout << "\n|           ° CASO 10 °               |";
		cout << "\n|-------------------------------------|";
		cout << "\n| 1. Generar 3 matroids               |";
		cout << "\n| 1. Generar 5 matroids               |";
		cout << "\n| 3. Salir                            |";
		cout << "\n|-------------------------------------|";
		cin >> opcion_menu;
		switch(opcion_menu){
		case 1:
            cout << "\n|-------------------------------------|";
						cout << "\n|    ° EVALUANDO 3 MATROIDS           |";
            cout << "\n|          FUNCIONES a REALIZAR °     |";
            cout << "\n|-------------------------------------|";
            cout << "\n| 1. Pares                            |";
            cout << "\n| 2. Impares                          |";
            cout << "\n| 3. Letras Mayusculas                |";
            cout << "\n|-------------------------------------|";

			break;
		case 2:
			cout << "\n\n Generar 5 matroids \n\n";
			buscarNodo();

            cout << "\n|-------------------------------------|";
            cout << "\n|           ° FUNCIONES °             |";
            cout << "\n|-------------------------------------|";
            cout << "\n| 1. Pares                            |";
            cout << "\n| 2. Impares                          |";
            cout << "\n| 3. Letras Mayusculas                |";
            cout << "\n|-------------------------------------|";
            cout << "\n\n Escoja una Funcion: ";
            cin >> funcion;


			break;
		case 3:
			cout << "\n\n Programa finalizado...";
			break;
		default:
			cout << "\n\n Opcion No Valida \n\n";
		}
	} while (opcion_menu != 3);

	return 0;
}

