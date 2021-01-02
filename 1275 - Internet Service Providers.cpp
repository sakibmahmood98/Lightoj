#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int c,n;
        scanf("%d %d",&n,&c);
        float t;
        if(n==0) t=0;
        else if(c==0) t=0;
        else t=(float)c/(2*(float)n);
        int x=(int)t;
        if(t-x>0.50) x++;
        printf("Case %d: %d\n",i+1,x);

    }
}
