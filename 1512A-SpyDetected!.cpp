#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while (t--)
    {
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(int i=0; i<n; i++)
        {
            if(i==0 && a[i]!=a[i+1] && a[i]!=a[i+2])
            {
                cout<<i+1<<endl;
                break;
            }
            if(i==(n-1) && a[i]!=a[i-1] && a[i]!=a[i-2])
            {
                cout<<i+1<<endl;
                break;
            }
            if(i!=0 && i!=(n-1) && a[i] != a[i+1] && a[i] != a[i-1])
            {
                cout<<i+1<<endl;
                break;
            }
        }
        
    }

    return 0;
}