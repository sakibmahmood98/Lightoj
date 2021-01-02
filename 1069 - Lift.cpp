#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,m;
        cin>>n>>m;
        if(n<=m) printf("Case %d: %d\n",i+1,m*4+9+10);
        //cout<<m*4+9+10<<endl;
        else if(n>m)
        {
            int p=n-m;
            p=p*4;
            printf("Case %d: %d\n",i+1,n*4+p+9+10);
            //cout<<n*4+p+9+10<<endl;
        }
    }
}

