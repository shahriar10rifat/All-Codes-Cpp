#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<"Enter number of elements: ";
    int n;
    cin>>n;

    pair <int , int> arr[n+7];

    cout<<"Enter Elements : "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i].first>>arr[i].second;
    }

    cout<<"Elements Are: "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i].first<<" "<<arr[i].second<<endl;
    }

return 0;
}
/*
10
1 2
3 4
5 6
7 8
7 9
10 11
11 12
11 13
14 15
14 1
*/
