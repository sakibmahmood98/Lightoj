#include<iostream>
using namespace std;
int l=1;
int dectobin( int n)
{
    char a[31];
    int j=0;
    int count=0;
    for(int i=31;i>=0;i--)
    {
        int k=n>>i;
        if(k & 1)
        {
            a[j]='1';
            count++;
            j++;
        }
        else
        {
            a[j]='0';
            j++;
        }
    }
    int e=0;
    int p=0;
    int x=0;
    for(int i=j-1;i>=0;i--)
    {

        if(a[i]=='1')
        {
            e++;
            if(p==0)
            {
                x=i;
                p=1;
            }
            if(a[i-1]=='0')
            {
                a[i]='0';
                a[i-1]='1';
                if(count >1)
                {
                    if(a[j-1]=='0')
                    {
                        int q=j-1;
                        a[q]='1';
                        a[x]='0';
                        q--;
                        int c=0;
                        while(q>i)
                        {

                            if(e>2)
                            {
                                a[q]='1';
                                e--;
                                c++;
                            }
                            else
                            {
                                a[q]='0';
                            }
                            if(count-2==c)
                            {
                                a[q-1]='0';


                            }
                            q--;

                        }
                    }
                }
                break;
            }
        }
    }
    int f=0;
    for(int i=0;i<j;i++)
    {
        if(a[i]=='1')
        {
            f++;
        }
    }
    if(f!=count)
    {
        a[j-1]='0';
    }
    long long int dec_value = 0;
    int base = 1;
    for(int i=j-1;i>=0;i--)
    {
        if (a[i]=='1')
            dec_value += base;
        base = base*2;
    }
    cout<<"Case "<<l<<": "<<dec_value<<endl;
    l++;

}
int main(void)
{
     int n,t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        dectobin(n);
    }

}

