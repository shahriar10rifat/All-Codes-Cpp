#include<bits/stdc++.h>
using namespace std;

int binarySearch(const vector<int>bsNums , int toFind){
    int left = 0;
    int right = bsNums.size();

    while(left <= right){
        int mid = left + (right - left) / 2;

        if(bsNums[mid] == toFind) return mid;

        else if(bsNums[mid] > toFind) right = mid-1; // If target is smaller, ignore the right half
        else if(bsNums[mid] < toFind) left = mid+1; // If target is bigger, ignore the right half
    }
    return -1;
}

int main(){
    vector<int> nums;
    int n, target;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter the elements:\n";
    for (int i=0; i<n; i++) {
        int x;
        cin>>x;
        nums.push_back(x);
    }

    cout<<"Enter the target value to find: ";
    cin>>target;

    // Sort the array for binary search
    sort(nums.begin(), nums.end());

    // Perform binary search
    int result = binarySearch(nums, target);

    if (result != -1) cout<<"The target value "<< target <<" is found at index: "<< result <<"."<< endl;
    else cout << "The target value was not found." << endl;

    return 0;
}
