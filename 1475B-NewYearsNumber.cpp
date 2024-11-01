#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;    

    while(t--)
    {
        int x,y,n;
        cin>>n;

        y=n%2020;
        x=((n-y)/2020)-y;

        if(x>=0 && (2020*x+2021*y)==n )
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