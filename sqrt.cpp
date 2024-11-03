#include<bits/stdc++.h>
using namespace std;

int mySqrt(int x){

    int left = 1, right = x, result = 0;
    while (left <= right){
        int mid = left + (right -left) / 2;

        if(mid < x / mid){
            result = mid;
            left = mid+1;
        }
        else {
            right = mid -1;
        }
    }
    cout<<result<<endl;
}

int main(){
    int number;
    cin>>number;

    mySqrt(number);

    return 0;
}
