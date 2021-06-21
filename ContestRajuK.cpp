#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    cout<<"Lumberjacks:"<<endl;
    for(int i=0; i<=n; i++){
           int a,b,c,d,e,f,g,h,x,j;
        cin>>a>>b>>c>>d>>e>>f>>g>>h>>x>>j;
        if(a>b && b>c && c>d && d>e && e>f && f>g && g>h && h>x && x>j){
                cout<<"Ordered"<<endl;
        }
        else if(a<b && b<c && c<d && d<e && e<f && f<g && g<h && h<x && x<j) {
                cout<<"Ordered"<<endl;
        }
        else {
                cout<<"Unordered"<<endl;
        }
    }
return 0;
}
