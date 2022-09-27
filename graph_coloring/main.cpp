#include "Algorithm.hpp"

int main(int argc, const char * argv[]) {
    int V;
    int E;
    cout << "Start" << endl;
    cin >> V >> E;

    Graph *graph = new Graph(V, E);
    
    int tmp_V_1;
    int tmp_V_2;

    for(int i = 0; i < E; i++){
        cin >> tmp_V_1 >> tmp_V_2;
        graph -> add_edge(tmp_V_1, tmp_V_2);
    }
    graph -> update_degree();
    
    Algorithm coloring;
    cout << coloring.run(*graph) << endl;
    return 0;
}
