
#include<bits/stdc++.h>
using namespace std;
int a[1010];
vector<int>b[1010];
bool c[1010];
queue<int >hmm;
int cc[1010];
int count1=0;
int k=0;
int bfs(int x)
{
    memset(c,0,sizeof c);
    hmm.push(x);
  //  c[x]=1;

    int i=0;
  //  int j=0;
    while(!hmm.empty())
    {
        if(c[hmm.front()]==0)
        {
            i=hmm.front();
            c[hmm.front()]=1;
            cc[hmm.front()]++;
            if(cc[hmm.front()]==k) count1++;

        }
        int v,f;
        v=i;
   //     cout<<v;
        for(int j=0;j != b[i].size();j++)
        {
            if(c[b[i][j]]==0)
            {
                hmm.push(b[i][j]);
            //    c[b[i][j]]=1;
  //          cc[hmm.front()]++;
            }
        }
        hmm.pop();
    }

}
int main(void)
{
    int t;
    cin>>t;
    for(int l=0;l<t;l++)
    {
        int n,m;
        cin>>k>>n>>m;
        memset(a,0,sizeof a);
        memset(b,0,sizeof b);
        memset(cc,0,sizeof cc);

   //     memset(hmm,0,sizeof hmm);
        count1=0;
        for(int i=0;i<k;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<m;i++)
        {
            int u,v;
            cin>>u>>v;
            b[u].push_back(v);
       //     b[v].push_back(u);
        }
        for(int i=0;i<k;i++)
        {
            bfs(a[i]);
        }

        cout<<"Case "<<l+1<<": "<<count1<<endl;
    }
}
