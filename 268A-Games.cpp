#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;

    int h[n],a[n];

    for(int i=1; i<=n; i++)//input
    {
        cin>>h[i]>>a[i];
    }
    for(int i=1; i<=n; i++)//one team home side
    {
        for(int j=1; j<=n; j++)//another team,away side
        {
            if(h[i]==a[j])//if color is equal then increase our value 
            {
                count++;
            }
        }
    }

    cout<<count;

    return 0;
}