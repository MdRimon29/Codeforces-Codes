#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while (t--)
    {
        int chickens,cows;
        cin>>n;
        if(n%4==0)
        {
            cout<<(n/4)<<endl;
        }
        else
        {
            cout<<(n/4)+1<<endl;
        }
    }
    return 0;
}