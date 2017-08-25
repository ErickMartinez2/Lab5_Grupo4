#pragma once
#include "Matriz.h"
#include <iostream>
#include <string>
#include <fstream>
#include <iostream>
using namespace std;
class Imprimir {
	private:
		Matriz matA;
		Matriz matB;
		Matriz matC;
	public:	
		void Print(Matriz, Matriz, Matriz);
		//void Print(Matriz, Matriz);
};
