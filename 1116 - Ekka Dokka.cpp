
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        unsigned long long int a;
        scanf("%llu",&a);
        int x=0;
        if(a%2!=0) x=1;

        if(x==0 ) for(int j=2;j<=a/2;j=j*2)
        {
            unsigned long long int p=a/j;
            if(p%2!=0)
            {
                printf("Case %d: %llu %d\n",i+1,p,j);
                x=0;
                break;
            }
        }
        if(x==1)
        {
            printf("Case %d: Impossible\n",i+1);
        }
    }

}
