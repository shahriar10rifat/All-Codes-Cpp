#include <bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    if(((x%4 == 0) && (x%100 != 0)) || (x%400 == 0)){
        printf("Yeap %d is a leap year.",x);
    }
    else printf("No %d is not a leap year.",x);

return 0;
}
