#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
            cin>>s;
        if(s[0]=='o' && s[1]=='n' || s[1]=='n' && s[2]=='e' || s[0]=='o' && s[2]=='e') cout<<"1"<<endl;
        if(s[0]=='t' && s[1]=='w' || s[1]=='w' && s[2]=='o' || s[0]=='t' && s[2]=='o') cout<<"2"<<endl;
        if(s[0]=='t' && s[1]=='h' && s[2]=='r' && s[3]=='e'   ||    s[0]=='t' && s[1]=='h' && s[2]=='r' && s[4]=='e'   ||   s[0]=='t' && s[1]=='h' && s[3]=='e' && s[4]=='e'   ||   s[0]=='t' && s[2]=='r' && s[3]=='e' && s[4]=='e'   ||   s[1]=='h' && s[2]=='r' && s[3]=='e' && s[4]=='e' ) cout<<"3"<<endl;


    }


return 0;
}
