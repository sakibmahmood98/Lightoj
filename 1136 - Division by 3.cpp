#include<bits/stdc++.h>
using namespace std;

long int eq(long int n)
{
    long int result= n/3;
    result =result*2;
    if(n%3==2) result++;
    return result;
}

int main(void)
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long int a,b;
        cin>>a>>b;
        cout<<"Case "<<i+1<<": ";
        cout<<eq(b)-eq(a-1)<<endl;
    }
}

