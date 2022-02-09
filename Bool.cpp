#include <bits/stdc++.h>
using namespace std;

int main(){
    int x;

    bool arr[1000];
        for(int i=0; i<1000; i++){
            if(i%2 == 0){
                arr[i] = true;
            }
            else{
                arr[i] = false;
            }
        }
    cout<<"Enter Number of elements: ";
    cin>>x;
    for(int i=0; i<x; i++){
        int n; cin>>n;

        if(arr[n] == true) cout<<"Yes"<<endl;
        else cout<<"False"<<endl;
    }

return 0;
}
