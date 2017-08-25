#include <iostream>
#include <string>
#include "Matriz.h"
#include <vector>
using namespace std;

int main() {
	int opcion;
	vector<Matriz> matrices;
	do {
		cout << "*** Calculadora Matricial ***" << endl
			<< "1. Crear Matrices" << endl
			<< "2. Sumar Matrices" << endl
			<< "3. Menos Unario" << endl
			<< "4. Restar Matrices" << endl
			<< "5. Multiplicar Matrices" << endl
			<< "6. Transpuesta" << endl
			<< "7. Comparacion" << endl
			<< "8. Inversa" << endl
			<< "9. Salir" << endl
			<< "Ingrese su opcion: ";
		cin >> oipcion;
		cout << endl;
		switch (opcion) {
			case 1:
				cout << "-> Agregar Matrices" << endl;
				cout << "Ingrese el numero de filas de la matriz: ";
				int filas;
				cin >> filas;
				cout << "Ingrese el numero de columnas de la matriz: ";
				int columnas;
				cin >> columnas;
				Matriz matriz(filas, columnas);
				matrices.push_back(matriz);
				cout << "Matriz Creada!" << endl;
				break;
			case 2:

				break;
			case 3:

				break;
			case 4:

				break;
			case 5:

				break;
			case 6:

				break;
			case 7:

				break;
			case 8:

				break;
			case 9:
				cout << "Hasta Pronto!!" << endl;
				break;
		}
	} while (opcion != 9);
	return 0;
}
