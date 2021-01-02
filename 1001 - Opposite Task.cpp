#include<iostream>
using namespace std;
int main(void)
{
    int n;
    cin>>n;
    int a[n][3];
    int b[21]={0};
    for(int i=0;i<n;i++)
    {
        cin>>a[i][0];

        if(b[a[i][0]]!=0)
        {
            a[i][1]=b[a[i][0]];
            a[i][2]=a[i][0]-a[i][1];
            b[a[i][0]]++;
        }
        else
        {
            if(a[i][0]>10)
            {
                b[a[i][0]]=a[i][0]-9;
                a[i][1]=a[i][0]-10;
                a[i][2]=10;
            }
            else
            {
                b[a[i][0]]=1;
                a[i][1]=0;
                a[i][2]=a[i][0];
                if(a[i][0]==0)
                {
                        b[a[i][0]]=0;
                }
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i][2]<<" "<<a[i][1]<<endl;
    }
}

