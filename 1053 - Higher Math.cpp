#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a>b && a>c)
        {
            b=b*b;
            c=c*c;
            a=a*a;
            if(a==b+c) printf("Case %d: yes\n",i+1);
                //cout<<"YES";
                else printf("Case %d: no\n",i+1);
                //cout<<"NO";
        }
        else if(b>a && b>c)
        {
            b=b*b;
            c=c*c;
            a=a*a;
            if(b==a+c) printf("Case %d: yes\n",i+1);
                //cout<<"YES";
                else printf("Case %d: no\n",i+1);
                //cout<<"NO";
        }
        else if( c>a && c>b)
        {
            b=b*b;
            c=c*c;
            a=a*a;
            if(c==a+b) printf("Case %d: yes\n",i+1);
            //cout<<"YES";
                else printf("Case %d: no\n",i+1);
                //cout<<"NO";
        }
        else printf("Case %d: no\n",i+1);
        //cout<<"NO";
    }
}
