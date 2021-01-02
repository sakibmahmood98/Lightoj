#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,d;
        scanf("%d %d",&n,&d);
        int p;
        long long int x=d;
        if(d%n==0) p=0;
        else p=1;
        int q=1;
        for(int j=1;;j++)
        {
            if(p==0)
            {
                printf("Case %d: %d\n",i+1,j);
                break;
            }
                else
                {
                    q=(q*10)%n+1%n;
                     p=(x*q)%n;
                }
        }
    }
}

