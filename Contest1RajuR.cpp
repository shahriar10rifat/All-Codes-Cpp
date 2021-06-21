#include<bits/stdc++.h>
using namespace std;
int main(){
int x,Max,n,Min,y;
cin>>n;
for(int i=0; i<n; i++){
        Max=0;
        Min=99;
    cin>>y;
        for(int j=0; j<y; j++){
    cin>>x;
    if(x>Max){Max=x;}
    if(x<Min){Min=x;}
    x=0;
}
int sum;
sum=2*(Max-Min);
cout<<sum<<endl;
sum=0;
}

return 0;
}
