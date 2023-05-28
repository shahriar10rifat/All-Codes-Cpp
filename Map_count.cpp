#include<bits/stdc++.h>
using namespace std;

int main(){
    map <int , int> mp;

    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        mp[x]++;
    }
    map <int , int> :: iterator it;
    for(it=mp.begin(); it!=mp.end(); it++){
        cout<<it->first<<" : "<<it->second<<endl;
    }


    return 0;
}
