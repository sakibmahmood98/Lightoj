#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long long int x;
        cin>>x;
        long long int a=ceil(sqrt(x));
        long long int b=a*a;
        if(b%2!=0)
        {
            long long int q=b-x+1;
            if( q>a)
            {
                q=a+a-q;
                long long int temp=q;
                q=a;
                a=temp;
            }
            cout<<"Case "<<i+1<<": "<<q<<" "<<a<<endl;

        }
        else
        {
            long long int q=b-x+1;
            if( q>a)
            {
                q=a+a-q;
                long long int temp=q;
                q=a;
                a=temp;
            }
            cout<<"Case "<<i+1<<": "<<a<<" "<<q<<endl;
        }


    }

}
