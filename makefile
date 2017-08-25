Main: Main.o Matriz.o
	g++ Main.o Matriz.o -o a

Main.o: Main.cpp Matriz.h
	g++ -c Main.cpp Matriz.cpp

Matriz.o: Matriz.h Matriz.cpp
	g++ -c Matriz.cpp
