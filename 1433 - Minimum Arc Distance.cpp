#include<bits/stdc++.h>
using namespace std;
int ox,oy,ax,ay,bx,by;
double a,b,c,th;
int main(){
    int t;
    scanf("%d",&t);
    for(int i=1; i<=t; i++)
    {
        scanf("%d %d %d %d %d %d",&ox,&oy,&ax,&ay,&bx,&by);
        a=sqrt((ox-ax)*(ox-ax)+(oy-ay)*(oy-ay));
        b=sqrt((ox-bx)*(ox-bx)+(oy-by)*(oy-by));
        c=sqrt((ax-bx)*(ax-bx)+(ay-by)*(ay-by));
        th=acos((a*a+b*b-c*c)/(2*a*b));
        printf("Case %d: %0.6f\n",i,th*a);
    }
}
