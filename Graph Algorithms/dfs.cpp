#include <bits/stdc++.h>
using namespace std;

int main(){

    int nodes, edges;
    int graph[10][10] = {0};
    int visited[10] = {0};

    cout << "Enter number of nodes: ";
    cin >> nodes;

    cout << "Enter the number of edges: ";
    cin >> edges;

    cout <<  "Enter the edges (u, v): ";
    for(int i=0; i<edges; i++){
        int u, v;
        cin >> u >> v;
        graph[u][v] = 1;
        graph[v][u] = 1;
    }

    int start;
    cout << "Enter the starting edge: ";
    cin >> start;

    cout << "DFS Traversal: ";

}