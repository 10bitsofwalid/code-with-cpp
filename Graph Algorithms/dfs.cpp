#include <bits/stdc++.h>
using namespace std;

void dfs(int c, int graph[10][10], int visited[10], int nodes){

    visited[c] = 1;
    cout << c << " ";

    for(int n=0; n<nodes; n++){
        if(graph[c][n] == 1 && visited[n] == 0){
            dfs(n, graph, visited, nodes);
        }
    }

}

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
    dfs(start, graph, visited, nodes);

    return 0;

}