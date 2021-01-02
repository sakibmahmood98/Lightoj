#include<bits/stdc++.h>
using namespace std;
int main(void)
{
     int t;
     cin>>t;
     for(int i=0;i<t;i++)
     {
         double AD,AB, AC, BC,m;
         cin>>AB>>AC>>BC>>m;
         AD=(sqrt(m)/sqrt((m)+1))*AB;
         cout <<"Case "<<i+1<<": "<<fixed << setprecision(10) << AD << '\n';
     }
}
