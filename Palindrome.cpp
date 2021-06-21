#include <bits/stdc++.h>
using namespace std;
int main(){
    int x, a, b, revs=0;
    cin>>x;
    a = x;
    while(x>0){
        b = x % 10;
        revs= revs*10+ b;
        x/=10;
    }
    if(a == revs) cout<<a<<" is a Palindrome number"<<endl;
    else cout<<a<<" is not a Palindrome number"<<endl;
return 0;
}

