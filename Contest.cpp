#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;    

    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int c[k],b[k];
        
        for(int i=0; i<k; i++)
        {
            cin>>b[i]>>c[i];
        }

        sort(c,c+k, greater<int>());
        int length,sum=0;
        if(n>k)
        {
            length=k;
        }
        else
        {
            length=n;
        }
        for(int i=0; i<length; i++)
        {
            sum=sum+c[i];
        }
        cout<<sum<<endl;
    }    
    return 0;
}