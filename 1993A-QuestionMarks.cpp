#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,sum=0,a=0,b=0,c=0,d=0;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0; i<4*n; i++)
        {
            if(s[i]=='A' && a<n)
            {
                sum +=1;
                a++;
            }
            if(s[i]=='B' && b<n)
            {
                sum +=1;
                b++;
            }
            if(s[i]=='C' && c<n)
            {
                sum +=1;
                c++;
            }
            if(s[i]=='D' && d<n)
            {
                sum +=1;
                d++;
            }
            else{
                continue;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}