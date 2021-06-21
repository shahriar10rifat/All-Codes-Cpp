#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){ // test case
        ll x, y, sum=0; //y will carry the last digit of the input;
        cin>>x;
        while (x!=0){
        y = x%10;  // 123 % 10 = 3        | 12 % 10 = 2       | 1 % 10 = 1
        sum+=y;    // 0   +  3 = 3        | 3  + 2  = 5       | 5 + 1  = 6
        x=x/10;    // 123 / 10 = 12, x!=0 | 12 / 10 = 1, x!=0 | 1 / 10 = 0, x=0,end of loop;
        }
        cout<<sum<<endl;
    }
    return 0;
}
