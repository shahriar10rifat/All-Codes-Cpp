#include<bits/stdc++.h>
#define pb push_back
#define ii pair<int,int>
using namespace std;

vector <ii> graph[100007];
int dis[10000];
const int inf = 100000;

void call(int u){
    dis[u] = 0;
    queue<int>q;
    q.push(u);

    while(!q.empty()){
        int u = q.front();
        q.pop();

        for(int i=0; i<graph[u].size(); i++){
            int v = graph[u][i].first;
            int w = graph[u][i].second;

            if(dis[v]+w < dis[u]){
                dis[v] = dis[u] + w;
                q.push(v);
            }
        }
    }
}

int main(){
    for(int i=0; i<10000; i++){
        dis[i] = inf;
    }

    int node, edge;
    cout<<"Enter Node and Edge: ";
    cin>>node>>edge;

    for(int i=0; i<edge; i++){
        int u, v, w;
        cin>>u>>v>>w;

        graph[u].pb(ii(v,w));
        graph[v].pb(ii(u,w));
    }
    cout<<"Enter Source: ";
    int sr; cin>>sr;

    call(sr);
    cout<<"Enter Destination: ";

    int dest; cin>>dest;
    cout<<dis[dest]<<endl;

    return 0;
}


