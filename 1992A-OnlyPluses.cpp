#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int a,b,c,i=5;
        cin>>a>>b>>c;
        while(i--)
        {
            int d=min(a,min(b,c));
            if(d==a)
            {
                a+=1;
            }
            else if(d==b)
            {
                b+=1;
            }
            else
            {
                c+=1;
            }
        }
        cout<<a*b*c<<endl;
    }
    return 0;
}