#include<bits/stdc++.h>
using namespace std;

int main(){
    priority_queue <int> Q;
    Q.push(1001);
    Q.push(100201);
    Q.push(122);

    while(!Q.empty()){
        cout<<Q.top()<<endl;
        Q.pop();
    }
    if(Q.size() == 0){
        cout<<"The Queue is empty";
    }
    return 0;
}

///we always pop from top to bottom....
///biggest number will always be on top and the lowest in bottom....
