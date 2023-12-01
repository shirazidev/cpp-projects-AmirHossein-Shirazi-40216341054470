#include<iostream>
using namespace std;

int main()
{
    int i,j,n,m,a;
    cin>>n;
    for(i=1;i<=n;i++)
    { j=i;
    while(j>0)
    { a=j%10;
    if((a!=2)&&(a!=5))
    break;
    j=j/10;
    }
    if(j==0)
    cout<<i<<" ";
    }
}