#include <bits/stdc++.h>
using namespace std;
int main(){
    string s,s0,m0,s1,m1,s2,m2,s3,m3,s4,m4;

            cin>>s0>>m0>>s1>>m1>>s2>>m2>>s3>>m3>>s4>>m4;

    while(cin>>s){
        if(s==m0)cout<<s0<<endl;
        else if(s==m1)cout<<s1<<endl;
        else if(s==m2)cout<<s2<<endl;
        else if(s==m3)cout<<s3<<endl;
        else if(s==m4)cout<<s4<<endl;
        else cout<<"eh"<<endl;
    }
return 0;
}

