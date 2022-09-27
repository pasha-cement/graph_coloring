#include "Graph.hpp"

Graph::Graph(int def_V, int def_E){
    V = def_V;
    E = def_E;
    for (int i = 0; i < def_V; i++) {
        Vertex *tmp_vertex = new Vertex(i);
        G.insert(make_pair(i, tmp_vertex));
    };
}

void Graph::add_edge(int V_1, int V_2){
    G[V_1] -> add_to_connected(V_2);
    G[V_2] -> add_to_connected(V_1);
}

bool Graph::is_connect(int V_1, int V_2){
    vector<int> tmp = G[V_1] -> get_connected();
    for(auto i = tmp.begin(); i != tmp.end(); ++i){
        if (*i == V_2)
            return true;
    }
    return false;
}

void Graph::set_E(int tmp_E){
    E = tmp_E;
}
int Graph::get_E(){
    return E;
}

void Graph::set_V(int tmp_V){
    V = tmp_V;
}
int Graph::get_V(){
    return V;
}

void Graph::add_to_G(int value_of_V, Vertex* V){
    G.insert(make_pair(value_of_V, V));
}

map<int, Vertex*>  Graph::get_G(){
    return G;
}

void Graph::update_degree(){
    for(int i = 0; i < V; i++){
        vector<int> tmp = G[i] -> get_connected();
        G[i] -> set_degree(tmp.size());
    }
}
