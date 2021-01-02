#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long int x;
        cin>>x;

        cout<<"Case "<<i+1<<": ";
        if(__builtin_parity(x)==1) cout<<"odd"<<endl;
        else cout<<"even"<<endl;
    }
}

