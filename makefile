a: Main.o Matriz.o Imprimir.o
	g++ Main.o Matriz.o Imprimir.o -o a

Main.o: Main.cpp Matriz.h Imprimir.h
	g++ -c Main.cpp Matriz.cpp Imprimir.h

Matriz.o: Matriz.h Matriz.cpp
	g++ -c Matriz.cpp

Imprimir.o:	Matriz.h Imprimir.h Imprimir.cpp
	g++ -c Imprimir.cpp

clean:
	rm *.o a
