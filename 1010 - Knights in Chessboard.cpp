#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int t;
    scanf("%d",&t);
    int d=0;
    for(int i=0;i<t;i++)
    {
        int n,m;
        scanf("%d %d",&n,&m);
        if(n==1 || m==1)
        {
            d++;
            printf("Case %d: %d\n",d,m*n);

        }
        else if(n==2 || m==2)
        {
            int count=0;
            int count1=0;
            int k;
            if(n>=m) k=n;
            if(m>n) k=m;
            if(n)
            {
                for(int j=1;j<=k;j++)
                {

                    count1++;
                    if(count1<=4)
                    {
                        if(count1==1) count++;
                        if(count1==2) count++;
                        if(count1==4)
                        {
                            count1=0;
                        }

                    }
                }
                d++;
                printf("Case %d: %d\n",d,count*2);
            }

        }
        else if( n>2 && m>2 )
        {
            int x;
            int y;
            int p;
            int q;
            if(n)
            {
                if(n%2==0)
                {
                    x=n/2;
                    p=x;
                }
                if(n%2!=0)
                {
                    x=n/2+1;
                    p=x-1;
                }
                if(m%2==0)
                {
                    y=m/2;
                    q=y;
                }
                if(m%2!=0)
                {
                    y=m/2+1;
                    q=y-1;
                }
                d++;
                printf("Case %d: %d\n",d,(x*y)+(p*q));

            }
        }
    }

}

