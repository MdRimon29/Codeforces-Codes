#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,c;
    cin>>t;

    for(int i=0; i<t; i++)
    {
        cin>>a>>b>>c;
        if(a==b+c || b==a+c || c==a+b)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}