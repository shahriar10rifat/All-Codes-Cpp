#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a, avg, sum=0, cnt=0;
    while(1)
    {
        if(cnt==2)
            break;
        scanf("%lf", &a);
        if(a>=0 && a<=10)
        {
            cnt++;
            sum+=a;
        }
        else
            printf("nota invalida\n");
    }
        avg=sum/2.00;
            printf("media = %.2lf\n", avg);
    return 0;
}
