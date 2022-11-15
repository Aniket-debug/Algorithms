#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int>> graph[10];
void Dijkstra_Algo(int vertices,int edges,int source){
    vector<int> dis(vertices,INT_MAX);
    priority_queue< int,vector<int>,greater<int> > Q;
    for(int i=0;i<vertices;i++) Q.push(i);
    dis[source]=0;
    while(!Q.empty()){
        int u=Q.top();
        for(auto it:graph[u]){
            if(dis[u]+it.second < dis[it.first]) dis[it.first]=dis[u]+it.second;
        }
        Q.pop();
    }
    for(auto it:dis){
        cout<<it<<" ";
    }
    // for(int i=0;i<vertices;i++){
    //     for(auto it:graph[i]) cout<<it.first<<" "<<it.second<<" ";
    //     cout<<'\n';
    // }
}

int main()
{
    int vertices,edges;
    cin>>vertices>>edges;
    while(edges--){
        int v1,v2,w;
        cin>>v1>>v2>>w;
        graph[v1].push_back({v2,w});
    }
    Dijkstra_Algo(vertices,edges,0);
    return 0;
}

//Testcase-1

/*
5 10
0 1 10
0 2 5
1 3 1
1 2 2
2 1 3
2 3 9
2 4 2
3 4 4
4 3 6
4 0 7
*/
