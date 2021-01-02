#include<bits/stdc++.h>
using namespace std;
#define M 10000007
int main(void)
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int a,b,c,d,e,f,n,sum=0;
        cin>>a>>b>>c>>d>>e>>f>>n;
        if(n==0) printf("Case %d: %d\n",i+1,a%M);
        else if(n==1) printf("Case %d: %d\n",i+1,b%M);
        else if(n==2) printf("Case %d: %d\n",i+1,c%M);
        else if(n==3) printf("Case %d: %d\n",i+1,d%M);
        else if(n==4) printf("Case %d: %d\n",i+1,e%M);
        else if(n==5) printf("Case %d: %d\n",i+1,f%M);
        else
        {
            for(int j=6;j<n+1;j++)
            {
                sum=(a%M+b%M+c%M+d%M+e%M+f%M)%M;
                a=b;
                b=c;
                c=d;
                d=e;
                e=f;
                f=sum;
            }
            printf("Case %d: %d\n",i+1,f%M);
        }
       // printf("Case %d: %d\n",i+1,sum);
    }
}

