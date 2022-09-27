#include "Algorithm.hpp"

int Algorithm::run(Graph& G){
    priority_queue<Vertex*> q;
    map<int, Vertex*> G_vertex = G.get_G();// не поменяеться если буду использовать вектор
    
    for(int i = 0; i < G.get_V(); i++){
        q.push(G_vertex[i]);
    }

    int color = 0;
    while(!q.empty()){
        auto i = q.top();
        if (i -> get_color() == -1) {
            i -> set_color(color);
            q.pop();
        }
    }
    return color;
}
