#include<bits/stdc++.h>
using namespace std;

vector <int> graph[1000];
bool arr[1000];

void bfs(int n){        ///  n = 1
    queue<int>qu;
    qu.push(n);         /// qu = 1
    arr[n] = 1;         /// marked 1

    while(!qu.empty()){
        int u;
        u = qu.front(); /// u = 7
        qu.pop();       /// qu =
        cout<<u<<" > ";

        for(int i=0; i<graph[u].size(); i++){
            int v;
            v = graph[u][i];    /// v = 7
            if(!arr[v]){
                arr[v] = 1;     ///marked 2,3,4,5,6,7
                qu.push(v);     /// qu = 4,5,6,7
                cout<<v<<" ";
            }
        }
        cout<<endl;

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


return 0;
}

/*
    6 7
    1 2
    1 3
    2 4
    2 5
    3 6
    3 7

    1- 2,3
    2- 4,5
    3- 6,7
    4-
    5-
    6-
    7-


*/




