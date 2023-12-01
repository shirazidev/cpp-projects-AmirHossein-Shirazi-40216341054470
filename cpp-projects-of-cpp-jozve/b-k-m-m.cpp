#include<iostream>
using namespace std;

int main()
{
    int m,n,p,f,t;
    cin>>m>>n;
    f=m;
    p=n;
    do{
    t=m%n;
    m=n;
    n=t;
    } while(t!=0);
    // b,m,m
    cout<<m<<endl;
    // k,m,m
    cout<<(p*f)/m;
}