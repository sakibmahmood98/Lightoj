#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        double r;
        scanf("%lf",&r);
        double a=r+r;
        double square=a*a;
        double pi=2*acos(0.0);
        double circle=pi*r*r;
        double ans=square-circle;
        printf("Case %d: %0.2lf\n",i+1,ans);
    }

}
