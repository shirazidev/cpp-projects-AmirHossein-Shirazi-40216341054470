#include <iostream>
using namespace std;

int main() {
    long a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;

    if (a>=b && a>=c)
             cout<<a<<endl;
    else
     if (b>=a && b>=c)
             cout<<b<<endl;
    else
            cout<<c<<endl;
return 0;   
}