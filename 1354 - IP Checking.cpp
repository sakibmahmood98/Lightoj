#include<bits/stdc++.h>
using namespace std;

int decToBinary(int n)
{
    int p=0;
    for (int i = 31; i >= 0; i--) {
        int k = n >> i;
        if (k & 1)
            p=p*10+1;
        else
            p=p*10+0;
    }
    return p;
}
int main(void)
{
    int t;
    scanf("%d",&t);
    for(int j=0;j<t;j++)
    {
        string s1,s2;
        cin>>s1>>s2;
        int l1=s1.length();
        int l2=s2.length();
        int a[4];
        int p=0;
        int z=0;
        int x;
        for(int i=0;i<l1;i++)
        {
            if(s1[i]=='1') x=1;
            else if(s1[i]=='2') x=2;
            else if(s1[i]=='3') x=3;
            else if(s1[i]=='4') x=4;
            else if(s1[i]=='5') x=5;
            else if(s1[i]=='6') x=6;
            else if(s1[i]=='7') x=7;
            else if(s1[i]=='8') x=8;
            else if(s1[i]=='9') x=9;
            else if(s1[i]=='0') x=0;

                p=p*10+x;
            if(s1[i]=='.')
            {
                a[z]=p/10;
                p=0;
                z++;
            }
            if(i==l1-1)
            {
                a[z]=p;
                p=0;
                z++;
            }
        }
        int q[4];
        for(int i=0;i<4;i++)
        {
            q[i]=decToBinary(a[i]);
        }
        int b[4];
        z=0;
        for(int i=0;i<l2;i++)
        {
            if(s2[i]=='1') x=1;
            else if(s2[i]=='0') x=0;

                p=p*10+x;
            if(s2[i]=='.')
            {
                b[z]=p/10;
                p=0;
                z++;
            }
            if(i==l2-1)
            {
                b[z]=p;
                p=0;
                z++;
            }
        }
        int g=0;
        for(int i=0;i<4;i++)
        {
            if(q[i]-b[i]!=0)
            {
                g=1;
                printf("Case %d: No\n",j+1);
                break;
            }
        }
        if(g==0) printf("Case %d: Yes\n",j+1);
    }
}

