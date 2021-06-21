#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c=INT_MAX,d=INT_MIN;
    for(int i=0; i<=2; i++){
        cin>>a;
        cin>>b;
        if(a<c)c=a;
        if(b>d)d=b;

    }
     cout<<c<<d<<endl;


    return 0;
}
