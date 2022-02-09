#include<bits/stdc++.h>
using namespace std;

int main(){
    int node, edge;
    cout<<"Enter Node and Edge :";
    cin>>node>>edge;

    int graph[node][node];

    for(int i=0; i<node; i++){
        for(int j=0; j<node; j++){
            if(i == j)
                graph[i][j] = 0;
            else
                graph[i][j] = 100007;
        }
    }

    while(edge--){
        int left, right, cost;
        cout<<"Enter two ends and its Cost:";
        cin>>left>>right>>cost;

        graph[left-1][right-1] = cost;
        graph[right-1][left-1] = cost;
    }

    for(int i=0; i<node; i++){
        for(int j=0; j<node; j++){
            if(graph[i][j] == 100007){
                cout<<"X ";
            }
            else{
                cout<<graph[i][j]<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}
