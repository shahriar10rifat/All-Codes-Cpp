#include <bits/stdc++.h>
using namespace std;


void func(){
    int a=10;
    static int b=10;

     a=b+1;
     b=b+1;

    cout<< a <<endl;
    cout<< b << endl;
}
int main(){
    func();
    func();
    func();

return 0;
}

