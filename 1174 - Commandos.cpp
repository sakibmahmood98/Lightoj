
#include<bits/stdc++.h>
using namespace std;
#define inf 111111111
int c[105][105];
void floydwarshall(int n)
{
    for(int k=0;k<n;k++)
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                c[i][j]=min(c[i][j],c[i][k]+c[k][j]);

}



int main(void)
{
    int t;
    cin>>t;
    for(int l=0;l<t;l++)
    {
        int u,v;
        int n;
        cin>>n;
        int r;
        cin>>r;
        int s,d;

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==j) c[i][j]=0;
                else
                    c[i][j]=inf;
            }
        }


        for(int i=0;i<r;i++)
        {
            cin>>u>>v;
            c[u][v]=1;
            c[v][u]=1;
        }
        cin>>s>>d;
        floydwarshall(n);
        int m=0;
      //  int mm=0;
        for(int i=0;i<n;i++)
        {
            m=max(m,c[s][i]+c[i][d]);
        }
        printf("Case %d: %d\n",l+1,m);
    }
}
