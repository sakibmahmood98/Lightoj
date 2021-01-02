#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        long int m,n;
        scanf("%ld %ld",&n,&m);
        unsigned long long int sum=m*n/2;
        printf("Case %d: %llu\n",i+1,sum);
    }
}

