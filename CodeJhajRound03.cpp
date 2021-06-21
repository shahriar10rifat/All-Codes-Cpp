//........Empty..........
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"No Output."<<endl;
return 0;
}
*/
//......Neutral Box.......
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,b,d=INT_MIN;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>b;
        if(b>d)d=b;
}
     cout<<d<<endl;

    return 0;
}

