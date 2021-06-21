///GCD of 2 inputs
#include <bits/stdc++.h>
/*using namespace std;
int gcd(int a, int b){
    for(int i=min(a,b); i>1; i--){
        if(a%i==0 && b%i==0) return i;
    }
        return 1;
}
int main(){
    int x,y;
    cin>>x>>y;
    cout<<gcd(x,y)<<endl;


return 0;
}
*/
///GCD of 3 inputs
/*
#include <bits/stdc++.h>
using namespace std;
int n=0;
int gcd(int a, int b,int c){
    for (int i=min(a,b); i>1; i--){
        if(a%i==0 && b%i==0) n=i;
    }
    for (int i=min(n,c); i>1; i--){
        if (n%i==0 && c%i==0) return i;
    }
    return 1;

}
int main(){
    int x, y, z;
    cin>>x>>y>>z;
    cout<<gcd(x,y,z)<<endl;

return 0;
}
*/
///GCD using recursion............................

#include <bits/stdc++.h>
using namespace std;

    int n, m;
    int GCD (int y){
        if(m/y==0)return 1;
        if(n%y==0 && m%y==0) return y;
        GCD(y-1);
    }
int main(){
    cin>>n>>m;
    cout << GCD(min(n,m))<< endl;
    return 0;
}


