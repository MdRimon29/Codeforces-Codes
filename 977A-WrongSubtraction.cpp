#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;

    for(int i=0; i<k; i++)
    {
        if (n%10==1 || n%10==2 || n%10==3 || n%10==4 || n%10==5 || n%10==6 || n%10==7|| n%10==8 || n%10==9)
        {
            n=n-1;
        }
        else
        {
            n=n/10;
        }
    }

    cout<<n;

    return 0;
}