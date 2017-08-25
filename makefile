Main: Main.o
	g++ Main.o -o a

Main.o: Main.cpp
	g++ -c Main.cpp
