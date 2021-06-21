/*Prime number
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, i, m=0, prime=0;
  cout << "Enter the Number to check Prime: ";
  cin >> n;
  m=n/2;
  for(i = 2; i <= m; i++)
  {
      if(n % i == 0)
      {
          cout<<"Number is not Prime."<<endl;
          prime=1;
          break;
      }
  }
  if (prime==0)
      cout << "Number is Prime."<<endl;
  return 0;
}
*/
/*_____________________________________________
prime_o(n)
#include <bits/stdc++.h>
using namespace std;
bool prime (int a){
    for (int i=2; i<a; i++){
        if(a%i==0)return false;
    }
    return true;
}
int main(){
    int x; cin>>x;
        if(!prime(x)){cout<<x<<" Not Prime"<<endl;}
        else {cout<<x<<" Prime"<<endl;}
    return 0;
}
*/

