#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,c=INT_MAX;
    for(int i=0; i<5; i++){
        cin>>a;
        if(a<c)c=a;

    }
     cout<<"Min number is = "<<c<<endl;


    return 0;
}


