#include<bits/stdc++.h>
using namespace std;
char a[22][22];

int main(void)
{
    int t;
    cin>>t;
    for(int l=0;l<t;l++)
    {
        int w,h;
        cin>>w>>h;
        int p,k;
        memset(a, 0, sizeof a);

        for(int i=0;i<h;i++)
        {
            for(int j=0;j<w;j++)
            {
                cin>>a[i][j];
                if(a[i][j]=='@')
                {
                    p=i;
                    k=j;
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
            if(a[i+1][j]=='.')
            {
                a[i+1][j]='@';
                qi.push(i+1);
                qj.push(j);

            }
            if(a[i-1][j]=='.')
            {
                a[i-1][j]='@';
                qi.push(i-1);
                qj.push(j);
            }
            if(a[i][j+1]=='.')
            {
                a[i][j+1]='@';
                qi.push(i);
                qj.push(j+1);
            }
            if(a[i][j-1]=='.')
            {
                a[i][j-1]='@';
                qi.push(i);
                qj.push(j-1);
            }
        }

        cout<<"Case "<<l+1<<": "<<count1<<endl;


    }
}

