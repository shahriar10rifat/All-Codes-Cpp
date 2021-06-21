#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int cnt=0;
    int n = s.size();
    bool Flag = 0;
    for (int i = 0; i<n; i++){
            cnt = 1;
        for(int j=i; j<n-1; j++){
            if(s[j]!=s[j+1]) break;
            cnt++;
            if(cnt>=7){
                Flag =1;
                break;
            }
        }
        if(Flag)break;
    }
    if(Flag==1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}
