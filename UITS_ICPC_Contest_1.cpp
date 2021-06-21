///.....B - B (incorrect)
/*
#include <bits/stdc++.h>
///#define ll long long
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        string s;
        cin>>s;
        int cnt=0;
        for(int i=0; i<s.size(); i++){
            cnt+=s[i+1];
            ///cout<<cnt<<endl;
        }
        cout<<cnt<<endl;
    }

    return 0;
}
*/


///........B - B (2.0)
/*
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        ll x, y, sum=0; //y will carry the last digit of the input;
        cin>>x;
        while (x!=0){
        y = x%10;            // 123 % 10 = 3        | 12 % 10 = 2       | 1 % 10 = 1
        sum+=y;              // 0   +  3 = 3        | 3  + 2  = 5       | 5 + 1  = 6
        x=x/10;              // 123 / 10 = 12, x!=0 | 12 / 10 = 1, x!=0 | 1 / 10 = 0, x=0,end of loop;
        }
        cout<<sum<<endl;
    }
    return 0;
}
*/
/*
    3
    12345
    31203
    2123
    ______
    15
    9
    8
*/


///.....C - C
/*
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    while(n--){
    int a, b;
    cin>>a>>b;

    cout<<a%b<<endl;
    }
    return 0;
}
*/

/*
    3
    1 2
    100 200
    40 15
    _____
    1
    100
    10

*/

///......F - I
/*
#include <bits/stdc++.h>
using namespace std ;

int main(){
    int x;
    cin>>x;

    if(x>2 && x%2==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

return 0;
}
*/


///......G - J
/*
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s, cnt;
            cin>>s;
        for(int i=0; i<s.size(); i++){
        if(s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' || s[i] == 'i' || s[i] == 'I' ||
                s[i] == 'o' || s[i] == 'O' || s[i] == 'u' || s[i] == 'U' || s[i] == 'Y' || s[i] == 'y'){
                continue;
        }
        else{
            cnt+='.';
            cnt += tolower(s[i]);
        }
        }
        cout<<cnt<<endl;
return 0;
}

/*
    Codeforces

    .c.d.f.r.c.s
*/
