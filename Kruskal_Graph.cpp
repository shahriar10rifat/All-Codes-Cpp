#include <bits/stdc++.h>
#define ii pair<int,int>
#define iii pair<int,ii> // int is 1st for 'i'th index , ar ii er 1st int is 2nd 'i'th 1st and 2nd int is 2nd 'i'th 2nd;
using namespace std;

int parent[10007]; int node, edge;
vector <iii> graph; /// to store w(weight);

int findParent (int x){ ///eikhane 'x' pathalam;  /// ei function niche 'kruskal()' function er 'findParent()' er jonno;
    if(parent[x] == x) return x; ///eikhane jodi 'x' er parent 'x' e hoy tahole 'x' return kore dibo;
    return findParent(parent[x]); /// ar ta nahole ei parent k ager parent e call kore dilam, eta ghurte ghurte eksomoy parentt e pathiye dey;
}

int kruskal(){
    int n = node, Minimumcost=0;
    int len = graph.size(); /// graph er size ta 'len' e niye nilam;
    ///sort(graph.begin(), graph.end()); eitar temon proyojon nei;

    for(int i=0; i<=node; i++) parent[i]=i; ///eikhane node neyar karon node ke tar prottektar parent baniyedeya;

    for(int i=0; i<len; i++){ /// ei loop e cheque korbo sobgula (lane e ja ja ache) oigula nite parbo ki na;
        int u = graph[i].second.first;  /// eita 'u';
        int v = graph[i].second.second; /// eita 'v';
        ///tar por kaj holo 2ta ki ek e component e ki na...

        int u_parent = findParent(u); /// component chek korbo ei parentfunction er madhhome;
        int v_parent = findParent(v); /// (ager line e || )

            if(v_parent!=u_parent){ /// eikhane chek kortesi 2ta ek ki na;
                parent[v_parent] = parent[u_parent]; /// jodi ek na hoy tahole eikhane ta ek kore deya hochhe;
                Minimumcost+=graph[i].first; /// connect kora mane weight connect kora ba je cost oita connect kora;
                                             // ta 'Minimumcost' e weight ta '+' kortesi
            }
    }
    return Minimumcost;  /// uporer loop e ja ja jog korsi ta return kore dibo;
}

int main(){
    cin>>node>>edge;
    int Normal_cost=0;

    for(int i=0; i<edge; i++){  /// edge songkhok bar input;
        int u, v, w;
        cin>>u>>v>>w;   /// 1st node = u, tar porer node = v, weight(cost) = w;  ///eita ekta waited graph
        Normal_cost+=w; /// cause every w is connected thats why keeping the value stored;
        graph.push_back(iii(w,ii(u,v))); /// w age rakhtesi karon niche w(weight) onujayi sort korbo;
                                         //  calling another pair 'ii'; 1st e u, 2nd e v
    }
    sort(graph.begin(), graph.end());   ///for pushing value in 'iii';

    cout<<"Normal Cost = "<<Normal_cost<<endl;
    cout<<"Minimum Cost = "<<kruskal()<<endl;
}

    /*
    input-

    7 9
    1 5 7
    7 2 2
    2 3 7
    2 4 2
    3 6 19
    3 5 5
    4 5 4
    1 7 3
    1 2 3

    output-

    Normal Cost = 52
    Minimum Cost = 35

    */
