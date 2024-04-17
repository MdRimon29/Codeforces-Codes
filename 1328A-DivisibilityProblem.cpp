#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,ans;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>a>>b;

        if(a<b)
        {
            cout<<b-a<<endl;
        }
        else if(a%b==0)
        {
            cout<<0<<endl;
        }
        else
        {
            ans=b-(a%b);
            cout<<ans<<endl;
        }
    }
}