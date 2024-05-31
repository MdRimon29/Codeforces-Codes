#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int maximum=max(max(max(a,b),c),d);
    if (a != maximum)
    {
        int x=maximum-a;
        cout<<x<<" ";
    }
    if (b != maximum)
    {
        int y=maximum-b;
        cout<<y<<" ";
    }
    if (c != maximum)
    {
        int z=maximum-c;
        cout<<z<<" ";
    }
    if (d != maximum)
    {
        int r=maximum-d;
        cout<<r<<endl;
    }
}