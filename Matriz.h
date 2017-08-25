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
		~Matriz();
		void  setHeight(int);
		void  setWidth(int);
		void  setPointer(int**);
		int getHeight();
		int getWidth();
		int** getPointer();
		/*Matriz operator+(Matriz& Matriz2) {
			Matriz resp (this->Height, this->Width);
			int** a = this->Pointer;
			int** b = Matriz2.Pointer;
			int** c = new int*[Height];
			for (int i = 0;i<this->getHeight();i++) {
				c[i] = new int [Width];
			}
	
			for (int i = 0;i<this->getHeight();i++) {
				for (int j = 0;j<this->getWidth();j++) {
					c[i][j] = a[i][j] + b[i][j];
				}
			}
			resp.setPointer(c);
			return resp;
		}
		Matriz operator-(Matriz& Matriz2) {
			Matriz resp(this->Height, this->Width);
			if (true) {
				int** a = this->Pointer;
				int** b = Matriz2.Pointer;
				int** c = new int*[Height];
				for (int i = 0;i<this->getHeight();i++) {
					c[i] = new int [Width];
				}
				
				for (int i = 0;i<this->getHeight();i++) {
					for (int j = 0;j<this->getWidth();j++) {
						c[i][j] = a[i][j] - b[i][j];
					}
				}
				resp.setPointer(c);
			}
			return resp;
		}
		Matriz operator() {
			int** trans = new int*[this->Width];
			for (int i = 0;i<this->Width;i++) {
				trans[i] = new int [Height];
			}
			for (int x=0; x < this->Height; x++) {
      				for (int y=0; y < this->width; y++) {
        				this->Pointer[y][x] = trans[x][y];
			      	}
    			}
		return trans;		
		}
		
	friend ostream& operator<<(ostream&, const Matriz&);*/
};
