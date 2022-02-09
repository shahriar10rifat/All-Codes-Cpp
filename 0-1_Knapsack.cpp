#include<bits/stdc++.h>
using namespace std;

int n;
int profit[10007];
int weight[10007];

knap(int i, int w){
    if(i>=n) return 0;
    int ans=0, ans2=0;

    if(weight[i]<=w) ans = profit[i] + knap(i+1, w-weight[i]);
    ans2 = knap(i+1, w);

    int res = max(ans , ans2);
    return res;
}

int main(){
    cout<<"Enter Number of elements: ";
    cin>>n;
    cout<<"Enter Weight: ";
    int w; cin>>w;

    cout<<"Enter Value and Weight: "<<endl;
    for(int i=0; i<n; i++){
        cin>>profit[i]>>weight[i];
    }

    int res = knap(0 , w);
    cout<<"Value of maximum profit is: "<<res;


    return 0;
}
/**

4
5
100 3
20 2
60 4
40 1

*/

