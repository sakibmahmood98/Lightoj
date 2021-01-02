#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);

    for(int i=0;i<t;i++)
    {
        unsigned long long int n;
        char m[6];
        scanf("%llu %s",&n,m);
        if(n%3==0 && m[0]=='B') printf("Case %d: Alice\n",i+1);
        else if( n%3!=0 && m[0]=='B') printf("Case %d: Bob\n",i+1);
        else if( n%3==1 && m[0]=='A') printf("Case %d: Bob\n",i+1);
        else if( n%3!=1 && m[0]=='A') printf("Case %d: Alice\n",i+1);
    }

}
