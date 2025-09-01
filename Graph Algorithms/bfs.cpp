#include  <bits/stdc++.h>
using namespace std;

void bfs(int start, int graph[10][10], int nodes){

    int visited[10] = {0};
    queue<int> q;

    visited[start] = 1;
    q.push(start);

    cout << "BFS Traversal: ";

    while (!q.empty()){
        int current = q.front();
        q.pop();
        cout << current << " ";

        for(int neighbour=0; neighbour<nodes; neighbour++){
            if(graph[current][neighbour] == 1 && visited[neighbour] == 0){
                visited[neighbour] = 1;
                q.push(neighbour);
            }
        }

    }

    cout << endl;

}

int main(){

    int nodes, edges;
    int graph[10][10] = {0};

    cout << "Enter the number of nodes: ";
    cin >> nodes;

    cout << "Enter the number of edges: ";
    cin >> edges;

    cout << "Enter the edges (u, v): " << endl;
    for(int i=0; i<edges; i++){
        int u, v;
        cin >> u >> v;
        graph[u][v] = 1;   //mark edge u - v
        graph[v][u] = 1;  //for undirected graph
    }

    int start;
    cout << "Enter the starting node: ";
    cin >> start;

    bfs(start, graph, nodes);

    return 0;
    
}