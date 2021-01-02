#include<bits/stdc++.h>
using namespace std;
/*double logn(int n,int r)
{
    return log(n)/log(r);
}*/
#define p 1000002
int main()
{
    vector<double>sum;
    double s=0;
    for(int i=1;i<=p;i++)
    {
        s=s+log((double)i);
        sum.push_back(s);
    }
    int t;
   // cin>>t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int a,b;
        //cin>>a>>b;
        scanf("%d %d",&a,&b);
        double x=sum[a-1];
        x=x/log((double)b);
        printf("Case %d: %d\n",i+1,(int)x+1);
    }
}
