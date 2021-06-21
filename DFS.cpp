#include <bits/stdc++.h>
using namespace std;

vector <int> graph[10007];
int in[10007],out[10007];
int tme=1;

void dfs(int par){

	if(in[par]==0){
		in[par]=tme;
		++tme;
	}
	for(int i=0; i<graph[par].size(); i++){
		int v = graph[par][i];
		if(in[v]==0){
			dfs(v);
		}
	}
	out[par] = tme;
	++tme;
}

int main(){
	int node,edge;cin>>node>>edge;

	for(int i=0; i<edge; i++){
		int u,v;cin>>u>>v;
		graph[u].push_back(v);
	}
	memset(in,0,sizeof(in));
	dfs(1);

	for(int i=1; i<=node; i++){
		cout<<i<<" -> "<<in[i]<<"/"<<out[i]<<endl;
		cout<<endl;
	}
}

/**

8 7
1 2
2 4
2 5
4 7
1 3
3 6
6 8

*/
