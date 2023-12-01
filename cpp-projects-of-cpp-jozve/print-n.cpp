#include<iostream>
using namespace std;

int main() {
    int a,i,seri=1,no,n;
        cin>>n;
        cout<<seri<<",";
        i=1; no=1;
        for(a=1;a<=n;a++)
        {
        i=i*(-1);
        no=no+a;
        seri=no*i;
        cout<<seri<<",";
    }
}