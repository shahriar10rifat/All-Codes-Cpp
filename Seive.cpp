//..........prime Numbers.............
/*#include <bits/stdc++.h>
using namespace std;

bool mark[1007];
void seive (int n){
    mark[0] = mark[1] = 1;

    for(int i=2; i<=n; i+=2) mark[i]=1;

    for(int i=3; i<n; i+=2){
        if(!mark[i]){
            for(int j=i+i; j<=n; j+=i){
                mark[j]=1;
            }
        }
    }
}
int main(){
    seive(1000);
    for(int i=1; i<=1000; i++){
        if(!mark[i]){
            cout<<"Prime number is :"<<i<<endl;
        }
    }
    return 0;
}
*/
///..........prime Factorization ...............
#include <bits/stdc++.h>
using namespace std;





