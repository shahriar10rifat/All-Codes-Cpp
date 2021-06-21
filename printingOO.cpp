#include <bits/stdc++.h>
using namespace std;
int main(){
    double x,y,z;
    while(cin>>x>>y){
        z=pow(y,1.0/x);
        cout<<fixed<<setprecision(2)<<z<<endl;
    }


return 0;
}
