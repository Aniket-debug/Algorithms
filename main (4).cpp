#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector
void Dijkstra_Algo(vector<pair<int,int>> graph,int vertices,int edges,int source){
    vector<int> dis(vertices,INT_MAX),vis(vertices,0);
    priority_queue<int,vector<int>,greater<int>> Q;
    for(int i=0;i<vertices;i++) Q.push(i);
    dis[source]=0;
    while(!Q.empty()){
        int u=Q.top();
        Q.pop();
        for(auto it:graph){
            if(dis[u]+it.second.second<dis[it.second.first]) continue;
        }
    }
}

int main()
{
    int vertices,edges;
    cin>>vertices>>edges;
    vector<pair<int,int>> graph[vertices];
    while(edges--){
        int v1,v2,w;
        cin>>v1>>v2>>w;
        graph[v1].push_back({v2,w});
    }
    Dijkstra_Algo(graph,vertices,edges,0);
    return 0;
}

