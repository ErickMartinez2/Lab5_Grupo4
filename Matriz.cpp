#include "Matriz.h"
#include <iostream>
#include <string>
using namespace std;
	Matriz::Matriz(int Height, int Width) {
		this->Pointer = new int*[Height];
		for (int i = 0;i<Height;i++) {
			Pointer[i] = new int [Width];
		}
		for (int i = 0;i<Height;i++) {
			for (int j = 0;i<Width;j++) {
				int Num;				
				cin >> Num;
				Pointer[i][j] = Num;
			}
		}
	}	
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
