//
//  graph_coloring
//
//  Created by Павел
//

#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include "graph.hpp"

using namespace std;

int main(){
    ofstream fout;
    int this_colors;
    fout.open("result data.txt");
    int num_vert = 0;
    int num_edges = 0;
    int K = 0;
    string b;
    vector <int> first;
    vector <int> second;
    ifstream fin;
    fin.open("/Users/pavel/Desktop/graph_coloring/data/gc_1000_9");
    while (!fin.eof()){
        K++;
        fin >> b;
        if (K == 1)
            num_vert = stoi(b);
        else if (K == 2)
            num_edges = stoi(b);
        else if (K > 2){
            if (K % 2 == 1){
                first.push_back(stoi(b));
            }
            else
                second.push_back(stoi(b));
        }
    }
    Graph G(num_vert);
    for (int i = 0; i < num_edges; i++){
        G.addEdge(first[i], second[i]);
    }
    this_colors = G.Coloring();
    fout << this_colors << endl;
    fin.close();
    fout.close();
    return 0;
}
