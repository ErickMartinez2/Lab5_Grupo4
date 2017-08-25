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
			if (true) {
				int** a = this->Pointer;
				int** b = Matriz2.Pointer;
				int** c = new int*[Height];
				for (int i = 0;i<this->getHeight();i++) {
					c[i] = new int [Width];
				}
				Matriz resp(this->Height, this->Width);
				for (int i = 0;i<this->getHeight();i++) {
					for (int j = 0;j<this->getWidth();j++) {
						c[i][j] = a[i][j] + b[i][j];
					}
				}
				resp.setPointer(c);
			}
			return resp;
		}
	friend ostream& operator<<(ostream&, const Matriz&);
};
