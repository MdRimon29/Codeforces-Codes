#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a;
        cin>>a;
        if(a>=102 && a<=109)
        {
            cout<<"YES"<<endl;
        }
        else if(a>=1010 && a<=1099)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }    
    return 0;
}