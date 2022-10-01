//
//  graph_coloring
//
//  Created by Павел
//

#ifndef graph_hpp
#define graph_hpp

#include <iostream>
#include <list>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;

class Graph{
    int V;
    vector <vector <int>> adj;
public:
    Graph(int V){
        this->V = V;
        adj.resize(V);
    }
    void addEdge(int v, int w);
    int Coloring();
};




#endif
