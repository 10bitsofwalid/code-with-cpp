#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, e;

    cout << "Enter the number of nodes & edges: ";
    cin >> n >> e;

    vector<vector<pair<int,int>>> adj(n+1);
    cout << "Enter the edges (u, v, w): ";
    for(int i=0; i<e; i++){
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }

    int src;
    cout << "Enter the source: ";
    cin >> src;

    vector<int> dist(n+1, 1e9);
    dist[src] = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater <pair<int, int>>> pq;
    pq.push({0, src});

    while(!pq.empty()){
        pair<int,int> topElement = pq.top();
        pq.pop();
        
        int d = topElement.first;
        int u = topElement.second;

        if (d != dist[u]) continue;

        for (size_t i = 0; i < adj[u].size(); i++) {
            int v = adj[u][i].first;
            int w = adj[u][i].second;

            if (dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
                pq.push(make_pair(dist[v], v));
            }
        }
    }

    cout << "Shortest distance from source: ";
    for(int i=1; i<e; i++){
        if (dist[i] == 1000000000) cout << "INF ";
        else cout << dist[i] << " ";
    }
    cout << endl;

    return 0;

}