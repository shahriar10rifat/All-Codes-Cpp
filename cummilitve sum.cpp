#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[5];

    for(int i=0 ; i<5 ; i++) {
        cin >> arr[i];
    }

    int csum[5];
    csum[0] = arr[0];
    for(int i=1; i<5; i++) {
        csum[i] += arr[i-1];
    }

    int l,r;
    cin >> l >> r;

    cout << csum[r] - csum[l-1] << endl;

    return 0;
}
