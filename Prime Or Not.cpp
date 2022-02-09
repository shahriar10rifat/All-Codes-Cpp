#include<bits/stdc++.h>
using namespace std;

bool mark[207];

void seive(int n){
    mark[0] = mark[1] = 1;

    for(int i=2; i<n; i++){
        if(!mark[i]){
            for(int j=i+i; j<=n; j+=i){
                    mark[j] = 1;

            }
        }
    }
}
int main(){
    int x;
    cout<<"Enter Number of elements: ";
    cin>>x;

    while(x--){
    int n; cin>>n;
    seive(n);
        if(!mark[n]) cout<<n<<" is Prime"<<endl;
        else cout<<n<<" is Not Prime"<<endl;
    }
    return 0;
}

