#include <bits/stdc++.h>
using namespace std;
int main(){
    stack <char> n;
    string s;
    cin>>s;
    for(int i=s.size()-1 ; i>=0 ; i--){
            if(s[i]=='{' || s[i]=='}') s.push(s[i]);
}
int open=0,sum=0;
    while (s.empty()==0){
           if (s.top()=='{'){
            open++
            s.pop();
           }
           else {
            if (open>0){
                ++ans;
                --open;
                }
                s.pop();
           }

    }

return 0;
}

