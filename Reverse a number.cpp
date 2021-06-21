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
    cout<<"Reverse number of the "<<a<<" is :"<<revs<<endl;
return 0;
}
