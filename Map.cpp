#include<bits/stdc++.h>
using namespace std;

          // initialize container

int main(){
    map <int , string> mp;

    mp[1] = "Kenshin";
    mp[2] = "samurai";
    mp[3] = "goku";
    mp[4] = "luffy";
    mp[5] = "naruto";

    for(auto i:mp){
        cout<<i.first<<" "<<i.second<<endl;
    }


    return 0;
}
/**
search time->      log(n)
Insertion time->   log(n) + Rebalance
Deletion time->    log(n) + Rebalance


*/
