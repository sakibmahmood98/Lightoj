#include<bits/stdc++.h>
using namespace std;
char a[22][22];
int b[22][22];

int main(void)
{
    int t;
    cin>>t;
    for(int l=0;l<t;l++)
    {
        int w,h;
        cin>>w>>h;
        int p,k,aa,bb,cc,dd,ee,ff;
        memset(a, 10000, sizeof a);
        memset(b,-1,sizeof b);
        for(int i=0;i<w;i++)
        {
            for(int j=0;j<h;j++)
            {
                cin>>a[i][j];
                if(a[i][j]=='h')
                {
                    p=i;
                    k=j;
                    b[i][j]=0;
                    a[i][j]='@';
                }
                if(a[i][j]=='a')
                {
                    aa=i;
                    bb=j;
                }
                if(a[i][j]=='b')
                {
                    cc=i;
                    dd=j;
                }
                if(a[i][j]=='c')
                {
                    ee=i;
                    ff=j;
                }
            }
        }


   //     cout<<p<<k;

        queue<int > qi;
        queue<int > qj;
        int count1=0;

        qi.push(p);
        qj.push(k);

        while(!qi.empty())
        {
            int i=qi.front();
            int j=qj.front();
            count1++;
            qi.pop();
            qj.pop();
            if(a[i+1][j]=='.' || a[i+1][j]=='a' || a[i+1][j]=='b' || a[i+1][j]=='c')
            {
                a[i+1][j]='@';
                b[i+1][j]=b[i][j]+1;
                qi.push(i+1);
                qj.push(j);
            }
            if(a[i-1][j]=='.' || a[i-1][j]=='a' || a[i-1][j]=='b' || a[i-1][j]=='c' )
            {
                a[i-1][j]='@';
                b[i-1][j]=b[i][j]+1;
                qi.push(i-1);
                qj.push(j);
            }
            if(a[i][j+1]=='.' || a[i][j+1]=='a' ||a[i][j+1]=='b' || a[i][j+1]=='c' )
            {
                a[i][j+1]='@';
                b[i][j+1]=b[i][j]+1;

                qi.push(i);
                qj.push(j+1);
            }
            if(a[i][j-1]=='.' || a[i][j-1]=='a' ||a[i][j-1]=='b' || a[i][j-1]=='c')
            {
                a[i][j-1]='@';
                b[i][j-1]=b[i][j]+1;
                qi.push(i);
                qj.push(j-1);
            }
        }
        int x;
        x=max(b[aa][bb],b[cc][dd]);
        x=max(x,b[ee][ff]);
        cout<<"Case "<<l+1<<": "<<x<<endl;
    }
}
