#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,sum1=0;
        string a;
        cin>>n;
        cin>>a;

        int b=sqrt(n);

        if(b*b!=n)
        {
            cout<<"NO"<<endl;
        }
        else 
        {
            for(int i=0; i<n; i++)
            {
                if(a[i]=='1')
                {
                    sum1++;
                }
            }
            if(sum1==(4*(b-1)))
            {
                cout<<"YES"<<endl;
            }
            else 
            {
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}