#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    int a[100000];
    for(int i=0; i<n; i++)//craete array
    {
        cin>>a[i];
    }
    for(int i=0; i<n; i++)//how many teams.if alongside two team are not equal
    {
        if(a[i]!=a[i+1])
        {
            count++;
        }
    }
    cout<<count;
}


