#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    int a[100];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]==1)
        {
            count++;
        }
    }
    if(count==0)
    {
        cout<<"EASY";
    }
    else
    {
        cout<<"HARD";
    }

    return 0;
}