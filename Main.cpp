#include <iostream>
#include <string>
#include "Matriz.h"
#include <vector>
#include "Imprimir.h"
using namespace std;

int main() {
	int opcion;
	vector<Matriz*> matrices;
	Imprimir* imprimir = new Imprimir();
	do {
		cout << endl;
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
		cout << endl;
		switch (opcion) {
			case 1: {
						cout << "-> Agregar Matrices" << endl;
						cout << "Ingrese el numero de filas de la matriz: ";
						int filas;
						cin >> filas;
						cout << "Ingrese el numero de columnas de la matriz: ";
						int columnas;
						cin >> columnas;
						Matriz* matriz = new Matriz(filas, columnas, true);
						matrices.push_back(matriz);
						cout << "Matriz Creada!" << endl;
					} break;
			case 2: {
						cout << "-> Sumar Matrices" << endl;
						for (int i = 0; i < matrices.size(); i++) {
							Matriz* matriz = matrices.at(i);
							cout << "Matriz #" << i  << endl;
							for (int j = 0; j < (*matriz).getHeight(); j++) {
								for (int k = 0; k < (*matriz).getWidth(); k++) {
									cout << "{" << (*matriz).getValor(j, k) << "}";
								}
								cout << endl;
							}
						}
						cout << "Ingrese el numero de la primera matriz: ";
						int opcion_matriz1;
						cin >> opcion_matriz1;
						cout << "Ingrese el numero de la segunda matriz: ";
						int opcion_matriz2;
						cin >> opcion_matriz2;
						Matriz* matriz2 = *matrices.at(opcion_matriz1) + *matrices.at(opcion_matriz2);
						imprimir -> Print(matrices.at(opcion_matriz1), matrices.at(opcion_matriz2), matriz2);
						cout << endl;
						cout << "-> Matriz Resultado:" << endl;
						for (int j = 0; j < (*matriz2).getHeight(); j++) {
							for (int k = 0; k < (*matriz2).getWidth(); k++) {
								cout << "{" << (*matriz2).getValor(j, k) << "}";
							}
							cout << endl;
						}

					} break;
			case 3: {
						cout << "-> Menos Unario" << endl;
						for (int i = 0; i < matrices.size(); i++) {
							Matriz* matriz = matrices.at(i);
							cout << "Matriz #" << i  << endl;
							for (int j = 0; j < (*matriz).getHeight(); j++) {
								for (int k = 0; k < (*matriz).getWidth(); k++) {
									cout << "{" << (*matriz).getValor(j, k) << "}";
								}
								cout << endl;
							}
						}
						cout << "Ingrese el numero de la matriz: ";
						int opcion_matriz;
						cin >> opcion_matriz;
						Matriz* matriz2 = -(*matrices[opcion_matriz]);
						cout << endl;
						cout << "-> Matriz Resultado:" << endl;
						for (int j = 0; j < (*matriz2).getHeight(); j++) {
							for (int k = 0; k < (*matriz2).getWidth(); k++) {
								cout << "{" << (*matriz2).getValor(j, k) << "}";
							}
							cout << endl;
						}
					}break;
			case 4: {
						cout << "-> Restar Matrices" << endl;
						for (int i = 0; i < matrices.size(); i++) {
							Matriz* matriz = matrices.at(i);
							cout << "Matriz #" << i  << endl;
							for (int j = 0; j < (*matriz).getHeight(); j++) {
								for (int k = 0; k < (*matriz).getWidth(); k++) {
									cout << "{" << (*matriz).getValor(j, k) << "}";
								}
								cout << endl;
							}
						}
						cout << "Ingrese el numero de la primera matriz: ";
						int opcion_matriz1;
						cin >> opcion_matriz1;
						cout << "Ingrese el numero de la segunda matriz: ";
						int opcion_matriz2;
						cin >> opcion_matriz2;
						Matriz* matriz2 = *matrices.at(opcion_matriz1) - *matrices.at(opcion_matriz2);
						imprimir -> Print(matrices.at(opcion_matriz1), matrices.at(opcion_matriz2), matriz2);
						cout << endl;
						cout << "-> Matriz Resultado:" << endl;
						for (int j = 0; j < (*matriz2).getHeight(); j++) {
							for (int k = 0; k < (*matriz2).getWidth(); k++) {
								cout << "{" << (*matriz2).getValor(j, k) << "}";
							}
							cout << endl;
						}
					} break;
			case 5: {

					} break;
			case 6: {

					} break;
			case 7: {
						cout << "-> Comparacion" << endl;
						cout << "-> Restar Matrices" << endl;
						for (int i = 0; i < matrices.size(); i++) {
							Matriz* matriz = matrices.at(i);
							cout << "Matriz #" << i  << endl;
							for (int j = 0; j < (*matriz).getHeight(); j++) {
								for (int k = 0; k < (*matriz).getWidth(); k++) {
									cout << "{" << (*matriz).getValor(j, k) << "}";
								}
								cout << endl;
							}
						}
						cout << "Ingrese el numero de la primera matriz: ";
						int opcion_matriz1;
						cin >> opcion_matriz1;
						cout << "Ingrese el numero de la segunda matriz: ";
						int opcion_matriz2;
						cin >> opcion_matriz2;
						bool igual = *matrices.at(opcion_matriz1) == *matrices.at(opcion_matriz2);
						if (igual) {
							cout << "Son iguales!!!" << endl;
						} else {
							cout << "No son iguales!!!" << endl;
						}
					} break;
			case 8: {

					} break;
			case 9: {
						for (int i = 0; i < matrices.size(); i++) {
							matrices.erase(matrices.begin() + i);
						}
						cout << "Hasta Pronto!!" << endl;
					} break;
		}
	} while (opcion != 9);
	return 0;
}

