#include<bits/stdc++.h>
using namespace std;

vector <int> graph[1000];
bool arr[1000];

int level[1000];

void bfs(int n){
    queue<int>qu;
    qu.push(n);
    arr[n] = 1;
    level[n] = 0;

    while(!qu.empty()){
        int u;
        u = qu.front();
        qu.pop();

        for(int i=0; i<graph[u].size(); i++){
            int v;
            v = graph[u][i];
            if(!arr[v]){
                level[v] = level[u] +1;
                arr[v] = 1;
                qu.push(v);
            }
        }

    }

}

int main(){
    int node, edge;
    cin>>node>>edge;

    for(int i=0; i<edge; i++){
        int x, y;
        cin>>x>>y;
        graph[x].push_back(y);
    }
    bfs(1);

    for(int i=1; i<=node; i++){
        cout<<i<<" "<<level[i]<<endl;
    }


return 0;
}

/*  6 7
    1 2
    1 3
    2 4
    2 5
    3 6
    3 7
*/
