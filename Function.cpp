//......recurse.........
/*
#include <bits/stdc++.h>
using namespace std;


void recurse(){
    string s="Shahriar";
    cout<< s <<endl;
    recurse ();
}
int main(){
    recurse();

return 0;
}
*/
#include <bits/stdc++.h>
using namespace std;


void recurse(int i){
    if(i==5) return;
    string s="Shahriar";
    cout<< s <<endl;
    recurse (i+1);

}
int main(){
    recurse(1);

return 0;
}
