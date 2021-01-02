#include<bits/stdc++.h>
using namespace std;
typedef long long int64;

#define max 32
int64 ncr[max][max];
int64 fac[max];
void ncrf()
{
    for(int i=0;i<max;i++)
    {
        for(int j=0;j<max;j++)
        {
            if(j>i) ncr[i][j] = 0;
            else if(j==i || j==0) ncr[i][j] =1;
            else ncr[i][j] = ncr [i-1][j-1] + ncr[i-1][j];
        }
    }
}
void factorial()
{
    fac[0]=1;
    for(int i=1;i<max ; i++ ) fac[i] =i*fac[i-1];
}
int main(void)
{
    ncrf();
    factorial();
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int n,k;
        scanf("%d %d",&n,&k);
        if(n<k) printf("Case %d: 0\n",i+1);
        else printf("Case %d: %llu\n",i+1,ncr[n][k]*ncr[n][k]*fac[k]);
    }
}

