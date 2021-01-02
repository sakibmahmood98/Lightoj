#include<bits/stdc++.h>
using namespace std;
int findab(int a,int b)
{
    int p=0;
    while(a>0)
    {
        p=p+a/b;
        a=a/b;
    }
    return p;
}
int findpq(int a,int b)
{
    int p=0;
    while(1)
    {
        if(a%b==0)
        {
            p++;
            a=a/b;
        }
        else break;
    }
    return p;
}
int main(void)
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,r,p,q;
        cin>>n>>r>>p>>q;
        int five_up=0,five_down=0,two_up=0,two_down=0;
        five_up=five_up+findab(n,5);
        five_up=five_up+(q*findpq(p,5));
        two_up=two_up+findab(n,2);
        two_up=two_up+(q*findpq(p,2));
        five_down=five_down+findab(r,5);
        five_down=five_down+findab(n-r,5);
        two_down=two_down+findab(r,2);
        two_down=two_down+findab(n-r,2);
        five_up=five_up-five_down;
        two_up=two_up-two_down;
        printf("Case %d: %d\n",i+1,min(five_up,two_up));

    }
}
