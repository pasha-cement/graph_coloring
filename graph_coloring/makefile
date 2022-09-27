all: graph_coloring

graph_coloring : main.o Vertex.o Graph.o Algorithm.o
		g++ main.o Vertex.o Graph.o Algorithm.o -o graph_coloring

main.o: main.cpp
	g++ -c main.cpp

Vertex.o: Vertex.cpp
	g++ -c Vertex.cpp

Graph.o: Graph.cpp
	g++ -c Graph.cpp

Algorithm.o: Algorithm.cpp
	g++ -c Algorithm.cpp
	
