#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int x1,x2,y1,y2;
        int m;
        cin>>x1>>y1>>x2>>y2;
        cin>>m;
        int q=0;
        for(int j=0;j<m;j++)
        {
            int x,y;
            cin>>x>>y;
            if(q==0)
                {
                    cout<<"Case"<<" "<<i+1<<":"<<endl;
            q=1;
                }
            if(x>=x1 && x<x2 && y>=y1 && y<=y2)
                cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
    }
}
