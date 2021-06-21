#include <bits/stdc++.h>
using namespace std;

int main(){
    string s, cnt="";
            cin>>s;
        for(int i=0; i<s.size(); i++){
        if(s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' || s[i] == 'i' || s[i] == 'I' || s[i] == 'o' || s[i] == 'O' || s[i] == 'u' || s[i] == 'U' || s[i] == 'Y' || s[i] == 'y'){
                continue;
        }
        else{
            cnt+='.';
            cnt += tolower(s[i]);
        }
        }
        cout<<cnt<<endl;
return 0;
}
