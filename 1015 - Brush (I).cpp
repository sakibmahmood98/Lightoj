#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        int sum=0;
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
            if(a[j]>0) sum=sum+a[j];
        }
        printf("Case %d: %d\n",i+1,sum);
    }
}

