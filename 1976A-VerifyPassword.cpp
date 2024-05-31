#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    string s,st;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>n;
        cin>>s;
        st=s;
        sort(s.begin(),s.end());

        if(st==s)
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