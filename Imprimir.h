#pragma once
#include "Matriz.h"
#include <iostream>
#include <fstream>
class Imprimir {
	private:
		Matriz matA;
		Matriz matB;
		Matriz matC;
	public:
		Imprimir();
		~Imprimir();	
		void Print(Matriz*, Matriz*, Matriz*);
		//void Print(Matriz, Matriz);
};
