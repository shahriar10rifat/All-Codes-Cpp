#include <bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    for(int i=1; i<=x; i++){
            //printing spaces
        for (int j=1; j<=x-i; j++){
            cout<<" ";
        }
        ///printing stars
        for(int j=1; j<=2*i-1; j++){
            cout<<"*";
        }
        cout<<endl;
    }

return 0;
}
