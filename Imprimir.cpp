#include "Imprimir.h"
#include "Matriz.h"
#include <iostream>
#include <string>
#include <fstream>
#include <iostream>
using namespace std;

void Imprimir::Print(Matriz matA, Matriz matB, Matriz matC) {
	int** PointA = matA.getPointer();
	int** PointB = matB.getPointer();
	int** PointC = matC.getPointer();
	string FileName;
	cout << "Ingrese el nombre del archivo: ";
	cin >> FileName;	
	ofstream writeFile(FileName.c_str());
	for (int i = 0;i<matA.getHeight();i++) {
		for (int j = 0;j<matA.getWidth();j++) {
			writeFile << PointA[i][j];
		}
		writeFile << "\n";
	}
	writeFile << "================\n";
	for (int i = 0;i<matB.getHeight();i++) {
		for (int j = 0;j<matB.getWidth();j++) {
			writeFile << PointB[i][j];
		}
		writeFile << "\n";
	}
	writeFile << "================\n";
	for (int i = 0;i<matC.getHeight();i++) {
		for (int j = 0;j<matC.getWidth();j++) {
			writeFile << PointC[i][j];
		}
		writeFile << "\n";
	}
}
