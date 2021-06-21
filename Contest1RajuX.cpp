#include <bits/stdc++.h>
using namespace std;

string str(int m){
string s;
stringstream ss;
ss<<m;
s=ss.str();
return s;}
int main(){
    int n; cin>>n;
    ++n;
    while(1){
        string s = str(n);
        if(s[0]!=s[1] &&s[0]!=s[1] && s[0]!=s[2] &&s[0]!=s[3] && s[1]!=s[2] && s[1]!=s[3] && s[2]!=s[3]){
            cout<<s<<endl;
            break;
        }
        else n++;
    }


return 0;
}
