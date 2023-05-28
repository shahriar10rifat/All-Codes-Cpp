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
    sort(arr, arr+n);
    for(int i=0; i<n; i++){
        cout<<arr[i].first<<" "<<arr[i].second<<endl;
    }



return 0;
}
/**
Array always sorts depending in the (first) input-

5
10 2
9 7
12 3
13 5
6 4
*/
