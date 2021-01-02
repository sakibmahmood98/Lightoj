#include<bits/stdc++.h>
using namespace std;


int main(void)
{
    int tt;
    scanf("%d",&tt);
    for(int l=0;l<tt;l++)
    {
        list<int >adj[20010];
        int color[20010]={0};
        int n;
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            int x,y;
            scanf("%d %d",&x,&y);
            adj[x].push_back(y);
            adj[y].push_back(x);

        }



        int mx=0;

        for(int i=0;i<20010;i++)
        {
            if(!adj[i].empty() && color[i]==0)
            {
                int black=0;
                int red=0;
                color[i]=1;
                black++;
                queue<int >q;
                q.push(i);
                while(!q.empty())
                {
                    int node = q.front();
                    q.pop();
                    for(list<int>::iterator it = adj[node].begin(); it != adj[node].end(); it++)
                    {
                        if(color[*it]==0)
                        {
                            q.push(*it);
                            if(color[node]==1)
                            {
                                color[*it]=2;
                                red++;

                            }
                            else
                            {
                                color[*it]=1;
                                black++;
                            }

                        }
                    }
                }

                mx += max(red,black);
            }
        }

        printf("Case %d: %d\n",l+1,mx);


    }
}
