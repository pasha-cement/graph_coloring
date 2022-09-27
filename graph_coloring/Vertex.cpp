#include"Vertex.hpp"

Vertex::Vertex(int def_value){
    set_value(def_value);
    set_color(-1);
    set_degree(-1);
    vector<int> connected{};
}

int Vertex::get_value(){
    return value;
}

void Vertex::set_value(int tmp_value){
    value = tmp_value;
}

int Vertex::get_color(){
    return color;
}

void Vertex::set_color(int tmp_color){
    color = tmp_color;
}

long int  Vertex::get_degree(){
    return degree;
}

void Vertex::set_degree(long int tmp_degree){
    degree = tmp_degree;
}

vector<int> Vertex::get_connected(){
    return connected;
}

void Vertex::add_to_connected(int E){
    connected.push_back(E);
}
