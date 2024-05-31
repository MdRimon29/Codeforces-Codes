#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b;
    if(a==b)
    {
        cout<<a<<" "<<0<<endl;
    }
    else if(a>b)
    {
        c=b;
        d=(a-b)/2;
        cout<<c<<" "<<d;
    }
    else
    {
        c=a;
        d=(b-a)/2;
        cout<<c<<" "<<d;
    }

    return 0;
}