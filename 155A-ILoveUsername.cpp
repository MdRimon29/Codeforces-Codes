#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,min,max,count=0;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(i==0)//set first value as min and max value
        {
            min=a[i];
            max=a[i];
        }
        if(a[i]>max)
        {
            max=a[i];
            count++;
        }
        if(a[i]<min)
        {
            min=a[i];
            count++;
        }
    }
    cout<<count;

    return 0;
}