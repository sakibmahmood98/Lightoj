#include<bits/stdc++.h>
using namespace std;
int bigmod(long long int a,long long int b,long long int M)
{
    if(b==0) return 1%M;
    long long int x=bigmod(a,b/2,M);
    x=(x*x)%M;
    if(b%2==1) x=(x*a)%M;
    return x;
}
#define M 1000003
#define N 1000006
int main(void)
{
    vector< long long int>fac;
    fac.push_back(1);
    for(int i=1;i<N-5;i++)
    {
        fac.push_back((fac[i-1]%M*i%M)%M);
       // fac[i]=(fac[i-1]%M*i%M)%M;
      // cout<<fac[i]<<endl;
    }
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long long int a,b;
        cin>>a>>b;

        long long int p=(fac[b]%M*fac[a-b]%M)%M;
        printf("Case %d: %lld\n",i+1,(fac[a]%M*bigmod(p,M-2,M))%M);//bigmod(p,M-2,M))%M;
       // cout<<ncr[a][b]<<endl;
    }
}
