#include<bits/stdc++.h>
#define pb push_back
using namespace std;

int main(){
    int node, edge;
    cout<<"Enter Node and Edge :";
    cin>>node>>edge;

    vector<int>graph[node];

    while(edge--){
        int x, y;
        cout<<"Enter elements:";
        cin>>x>>y;
        graph[x-1].pb(y);
        graph[y-1].pb(x);

    }
    for(int i=0; i<node; i++){
        cout<<"Node Number :"<<i+1<<" --> ";
        for(int j=0; j<graph[i].size(); j++){
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

/*
7 9
1 2
1 4
2 3
2 4
3 6
3 7
4 5
5 6
5 7

*/
