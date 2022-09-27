#ifndef Graph_hpp
#define Graph_hpp

#include"Vertex.hpp"

class Graph{
private:
    map<int, Vertex*> G;
    int V;
    int E;
public:
    Graph(int def_V, int def_E);
    
    void add_edge(int E_1, int E_2);
    
    bool is_connect(int V_1, int V_2);
    
    void set_V(int tmp_V);
    int get_V();
    
    void set_E(int tmp_E);
    int get_E();
    
    void set_X(int tmp_X);
    int get_X();
    
    map<int, Vertex*>  get_G();
    void add_to_G(int value_of_V, Vertex* V);
    
    void update_degree();
};

#endif
