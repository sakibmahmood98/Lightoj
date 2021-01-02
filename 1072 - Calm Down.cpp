#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1)
int main(void)
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        double r,R;
        int n;
        cin>>r>>n;
        R=(r*sin(pi/(float)n))/(1+sin(pi/(float)n));
        cout<<"Case "<<i+1<<": ";
        cout.precision(10);
        cout << fixed << R << endl;
    }


}
