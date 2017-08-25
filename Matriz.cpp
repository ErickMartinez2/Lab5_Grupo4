#include "Matriz.h"
#include <iostream>
#include <string>
using namespace std;

Matriz::Matriz() {

}

Matriz::Matriz(int height, int width, bool entrar) {
	Pointer = new int*[height];
	for (int i = 0;i<height;i++) {
		Pointer[i] = new int [width];
	}
	if (entrar) {
		int contador = 1;
		for (int i = 0;i<height;i++) {
			for (int j = 0;j<width;j++) {
				int Num;
				cout << "Ingrese el " << contador << " valor de la matriz: ";				
				cin >> Num;
				Pointer[i][j] = Num;
				contador++;
			}
		}
	}
	Height = height;
	Width = width;
}

int Matriz::getValor(int height, int weight) {
	return Pointer[height][weight];
}

/*Matriz::Matriz(int** pointer) {
  this->Pointer = new int*[(*pointer).getHeight];
  for (int i = 0;i<(*pointer).getHeight();i++) {
  Pointer[i] = new int [(*pointer).getWidth];
  }
  }*/	

void Matriz::setHeight(int a) {
	this->Height = a;
}

void Matriz::setWidth(int a) {
	this->Width = a;
}

void Matriz::setPointer(int** a) {
	this->Pointer = a;
}

int Matriz::getHeight() {
	return this->Height;
}

int Matriz::getWidth() {
	return this->Width;
}

int** Matriz::getPointer() {
	return this->Pointer;
}

Matriz::~Matriz() {
	for (int i = 0; i < Height; i++) {

		if (Pointer[i]) {
			delete Pointer[i];
		}

		delete[] Pointer;

	}
}
