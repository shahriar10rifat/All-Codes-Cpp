/*
///............Prime number
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, i, prime = 0;
    printf("Enter a Number: ");
    scanf("%d", &n);

    for(int i=2; i<=sqrt(n); ++i) {
        if (n%i == 0) {
        prime = 1;
        break;
        }
    }
    if (n==0 || n==1) {
    cout<<n<<" is neither prime nor composite."<<endl;
    }
    else {

    if (prime == 0)
        cout<<n<<" is a prime number."<<endl;
    else
      cout<<n<<" is not a prime number."<<endl;
  }
  return 0;
}
*/
/*______________prime_o(n)
#include <bits/stdc++.h>
using namespace std;
bool prime (int a){
    for (int i=2; i<a; i++){
        if(a%i==0)return false;
    }
    return true;
}
int main(){
    int x; cin>>x;
        if(!prime(x)){cout<<x<<" Not Prime"<<endl;}
        else {cout<<x<<" Prime"<<endl;}
    return 0;
}
*/

