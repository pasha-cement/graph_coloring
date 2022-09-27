#ifndef Vertex_hpp
#define Vertex_hpp

#include <stdio.h>
#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <algorithm>

using namespace std;

class Vertex{
private:
    int value;
    int color;
    long int degree;
    vector<int> connected;
public:
    Vertex(int def_value);
    
    int get_value();
    void set_value(int tmp_value);
    
    int get_color();
    void set_color(int tmp_color);
    
    long int get_degree();
    void set_degree(long int tmp_degree);
    
    vector<int> get_connected();
    
    void add_to_connected(int E);
};

#endif
