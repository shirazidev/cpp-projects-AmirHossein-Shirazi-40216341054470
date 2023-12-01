#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
        int k,j,i;
            for(i=1;i<10;i++)
                {cout<<setw(10-i);
            for(j=1;j<=i;j++)
                cout<<j;
            for(k=i;k>=1;k--)
                cout<<k;
                cout<<endl;
            }
}