#include<bits/stdc++.h>
using namespace std;
#define MX 1000001
vector<long int>nprime;
bool ifnotPrime(long int prime[],long int x)
{
    return (prime[x/64] & (1 << ((x >> 1) & 31)));
}
bool makeComposite(long int prime[],long int x)
{
    prime[x/64] |= (1 << ((x >> 1) & 31));
}
void bitWiseSieve(long int n)
{
    long int prime[n/64];
    memset(prime, 0, sizeof(prime));
    for ( long int i = 3; i * i <= n; i += 2) {
        if (!ifnotPrime(prime, i))
            for (long int j = i * i, k = i << 1; j < n; j += k)
                makeComposite(prime, j);
    }
    nprime.push_back(2);
    for (long int i = 3; i <= n; i += 2)
        if (!ifnotPrime(prime, i))
        nprime.push_back(i);

}
int primefactor(long long m)
{
    long int count=0,q=1;
    for( long int i=0;i<nprime.size();i++ )
    {
        count=0;
        if(nprime[i]*nprime[i]<=m)
        {
            if(m%nprime[i]==0)
            while(m%nprime[i]==0)
            {
                count++;
                m=m/nprime[i];
                if(m==0 || m==1) break;
            }
            count++;
            q=q*count;
        }
        //else break;
    }
    if(m!=1) return q*2;
    return q;
}
int main(void)
{
    int t;
    scanf("%d",&t);
    bitWiseSieve(1000001);
    for(int i=0;i<t;i++)
    {
        long long int a;
       // cin>>a;
        scanf("%lld",&a);
        printf("Case %d: %d\n",i+1,primefactor(a)-1);
    }
    //cout<<primefactor();
}
