#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, k, div=0, sum=0;
    cin>>n>>k;

    if(n%2==0){
        div = n/2;
    }
    else{
        div = (n/2)+1;
    }
    if(k<=div){
        sum = (k*2)-1;
    }
    else{
        sum = (k-div)*2;
    }
    cout<<sum<<endl;

    return  0;
}
