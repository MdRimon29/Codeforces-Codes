#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k;
    cin>>n>>k;

    if ((n+1)/2>=k)
    {
        cout<<(k*2)-1;
    }
    else
    {
        cout<<(k-(n+1)/2)*2;
    }

    return 0;
    
}