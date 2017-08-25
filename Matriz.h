#pragma once
#include <iostream>
#include <string>
using namespace std;
class Matriz {
	private: 
		int Height;
		int Width;
		int** Pointer;
	public: 
		Matriz(int, int);
		Matriz();
		void  setHeight(int);
		void  setWidth(int);
		void  setPointer(int**);
		int getHeight();
		int getWidth();
		int** getPointer();
		Matriz operator+(Matriz& Matriz2) {
			int** a = this->Pointer;
			int** b = Matriz2->Pointer;
			Matriz resp(this->Height, this->Width);
			for (int i = 0;i<Matriz.getHeight;i++) {
				for (int j = 0;j<Matriz.getWidth;j++) {
					resp[i][j] = a[i][j] + b[i][j];
				}
			}	
			Matriz resp();
			return resp;
		}
	friend ostream& operator<<(ostream&, const Integer&);
};
