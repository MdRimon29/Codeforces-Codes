#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,r;
    cin>>k>>r;
    int n=(k%10);
    if(n==r || n==0)
    {
        cout<<1;
    }
    else
    {
        for(int i=2; i<=10; i++)
        {
            int m=(n*i)%10;
            if(m==0)
            {
                cout<<i;
                break;
            }
            if(m==r)
            {
                cout<<i;
                break;
            }
        }
    }

    return 0;
}