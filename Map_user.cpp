#include<bits/stdc++.h>
using namespace std;

int main(){
    map <int , string> mp;

    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    cout<<"Enter Key and value: "<<endl;
    for(int i=0; i<n; i++){
        int x;
        string s;
        cin>>x>>s;
        mp.insert({x,s});       // insert elements
    }
    cout<<endl;

    cout<<"Printing in Natural Order: "<<endl;
    map <int , string> :: iterator it;
    cout<<"KEY"<<" "<<"value"<<endl;
    for(it = mp.begin(); it!=mp.end(); ++it){
        cout<<(*it).first<<" : "<<(*it).second<<endl;
//        cout<<it->first<<" : "<<it->second<<endl;    /// or we can also use this for output..............
    }
    cout<<endl;

//    using for each loop->
//    for(auto x: mp){
//            cout<<x.first<<" : "<<x.second<<endl;
//        }


    cout<<"Printing in reverse Order: "<<endl;
    map <int , string> :: reverse_iterator it2;
    cout<<"KEY"<<" "<<"value"<<endl;
    for(it2 = mp.rbegin(); it2!=mp.rend(); ++it2){
        cout<<(*it2).first<<" : "<<(*it2).second<<endl;
    }

    int k;
    cout<<"Enter a Key to see it's Value :";
    cin>>k;
    cout<<"mp["<<k<<"]= "<<mp[k]<<endl;
    cout<<"Map Size = "<<mp.size()<<endl<<endl;

    return 0;
}

/*
search time->      log(n)
Insertion time->   log(n) + Rebalance
Deletion time->    log(n) + Rebalance

5
1 kenshin
2 samurai
3 goku
4 luffy
5 naruto

*/
