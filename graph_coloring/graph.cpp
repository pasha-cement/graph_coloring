//
//  graph_coloring
//
//  Created by Павел
//

#include "graph.hpp"
void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w);
    adj[w].push_back(v);
}

int Graph::Coloring(){
    vector <int> colors(V);
    vector <bool> available(V);

    colors[0] = 0;
    for (int i = 1; i < V; i++){
        colors[i] = -1;
    }
    
    for (int j = 0; j < V; j++){
        available[j] = false;
    }
    sort(adj.begin(), adj.end(),[](const std::vector<int>& a, const std::vector<int>& b) {return a.size() > b.size();});
    for (int j = 1; j < V; j++)
    {
        vector <int>::iterator i;
        for (i = adj[j].begin(); i != adj[j].end(); ++i){
            if (colors[*i] != -1)
                available[colors[*i]] = true;
        }
        int k;
        for (k = 0; k < V; k++){
            if (available[k] == false)
                break;
        }
        colors[j] = k;
        for (i = adj[j].begin(); i != adj[j].end(); ++i)
        {
            if (colors[*i] != -1)
                available[colors[*i]] = false;
        }
    }
    sort(colors.begin(), colors.end());
    int count = 1;
    for (int i = 0; i < V - 1; i++){
        if (colors[i + 1] != colors[i])
            count++;
    }
    cout << count << endl;
    return count;
}
