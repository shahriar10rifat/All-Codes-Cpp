#include <bits/stdc++.h>
using namespace  std;

int main(){
    cout<<"Enter number of elements: ";
    int n; cin>>n;
    int arr[n];
    cout<<"Enter Values: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int i=0; i<n-1; i++){  // iteration...
        int mini = i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[mini]){
                mini = j;
            }
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }

    cout<<endl<<"Printing Elements: "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
