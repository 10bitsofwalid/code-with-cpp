#include <bits/stdc++.h>
using namespace std;

int primsMst(int n, vector<vector<pair<int, int>>> &adj){
    
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    vector<int> visited(n+1, 0);
    int mst = 0;
    pq.push({0, 1});

    while(!pq.empty()){
        pair<int, int> topElem = pq.top();
        int wt = topElem.first;
        int node = topElem.second;

        pq.pop();

        if(visited[node]) continue;
        visited[node] = 1;
        mst += wt;
        for (auto it : adj[node]) {
            int adjNode = it.first;
            int adjWt = it.second;
            if (!visited[adjNode]) {
                pq.push({adjWt, adjNode});
            }
}


    }

    return mst;

}

int main(){
    int n, e;
    cout << "Enter the number of nodes and edges: ";
    cin >> n >> e;

    vector<vector<pair<int, int>>> adj(n+1);

    cout << "Enter the edges: ";
    for(int i=0; i<e; i++){
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }

    cout << primsMst(n, adj) << endl;

}