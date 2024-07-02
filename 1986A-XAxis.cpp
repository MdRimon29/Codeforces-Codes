#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,c;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        int r,s,w;
        r=abs(a-a)+abs(a-b)+abs(a-c);
        s=abs(b-a)+abs(b-b)+abs(b-c);
        w=abs(c-a)+abs(c-b)+abs(c-c);

        if(r<=s && r<=w)
        {
            cout<<r<<endl;
        }
        else if(s<=r && s<=w)
        {
            cout<<s<<endl;
        }
        else if(w<=s && w<=r)
        {
            cout<<w<<endl;
        }
    }
    return 0;
}