#include<bits/stdc++.h>
using namespace std;

int main(){

    ///Max hip--->
    priority_queue <int> maxi;

    ///Min hip--->
    priority_queue <int, vector<int>, greater<int> >mini;

    cout<<"Enter number of elements: ";
    int t; cin>>t;
    for(int i=0; i<t; i++){
        cout<<"Enter Elements: ";
        int x;
        cin>>x;
        maxi.push(x);
        mini.push(x);
    }

    cout<<"Max Hip -> ";
    while(!maxi.empty()){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
    cout<<endl;

    cout<<"Min Hip -> ";
    while(!mini.empty()){
        cout<<mini.top()<<" ";
        mini.pop();
    }
    cout<<endl;

    return 0;
}

///we always pop from top to bottom....
///biggest number will always be on top and the lowest in bottom in wise of maxi....
///Lowest number will always be on bottom and the lowest in top in wise of mini....
