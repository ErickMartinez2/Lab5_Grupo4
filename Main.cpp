#include <iostream>
#include <string>
using namespace std;

int main() {
	int opcion;
	
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
		cin >> opcion;
		switch (opcion) {
			case 1:

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
