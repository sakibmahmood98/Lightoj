
#include<iostream>
using namespace std;
int main(void)
{
    int n;
    cin>>n;
    int a[n][2];
    for(int i=0;i<n;i++)
    {
        cin>>a[i][0]>>a[i][1];
        a[i][0]=a[i][0]+a[i][1];
    }
    for(int i=0;i<n;i++)
    {
        cout<<"Case "<<i+1<<": "<<a[i][0]<<endl;
    }


}
