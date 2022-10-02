all: graph_coloring

graph_coloring: main.o graph.o
	g++ main.o graph.o -o graph_coloring
	
main.o: main.cpp
	g++ main.cpp -c
	
grpah.o: graph.cpp
	g++ graph.cpp -c
