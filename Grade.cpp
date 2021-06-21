#include <bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    if(x>79) cout<<"A+"<<endl;
    else if(x>=70 && x<80) cout<<"A"<<endl;
    else if(x>=60 && x<70) cout<<"A-"<<endl;
    else if(x>=50 && x<60) cout<<"B"<<endl;
    else if(x>=40 && x<50) cout<<"C"<<endl;
    else if(x>=33 && x<40) cout<<"D"<<endl;
    else cout<<"Alas!!! You FAILED."<<endl;
return 0;
}
