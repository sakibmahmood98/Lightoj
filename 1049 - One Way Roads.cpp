#include<bits/stdc++.h>
using namespace std;

vector<int >edge[110];
int cost[110][110];
int visit[110];

int dfs(int p)
{
    int left=0,right=0;
    int i=1;
    visit[i]=1;
  //int u=1;
  int node=0;
    while(i)
    {
        for(int j=0;j<edge[i].size();j++)
        {
            if(!visit[edge[i][j]])
            {

                int v=i;
                i=edge[i][j];
      //          cout<<"i = "<<i<<" ";
                visit[i]=1;
                left=left+cost[v][i];
                right=right+cost[i][v];
    //            cout<<right<<"---"<<left<<endl;
     //           cout<<cost[i][v]<<" "<<cost[v][i]<<" "<<endl;
                node++;
                break;

            }
        }




        if(node==p-1) break;
    }

    left=left+cost[i][1];
    right=right+cost[1][i];
    return min(left,right);
}


int main(void)
{
    int t;
    cin>>t;
    for(int l=0;l<t;l++)
    {
        int node;
        cin>>node;

        memset(cost,0,sizeof (cost));
        memset(edge , 0 , sizeof (edge));
        memset(visit, 0 , sizeof (visit));
     //   for(int i=0;i<=node+1;i++) edge[i].clear();

        for(int i=0;i<node;i++)
        {
            int v,u,cos;
            cin>>u>>v>>cos;
            cost[u][v]=cos;
            edge[u].push_back(v);
            edge[v].push_back(u);



      //      cost[v][u]=0;

        }

        cout<<"Case "<<l+1<<": "<<dfs(node)<<endl;





    }
}

