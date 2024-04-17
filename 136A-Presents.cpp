#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,j;
    cin>>n;
    int a[n+1];//beacuse we start array index from 1.
    
    for(int i=1; i<=n; i++)
    {
        cin>>p;//input element
        a[p]=i;//making the element to array index
    }
    for (int r=1; r<=n; r++)
    {
        cout<<a[r]<<" ";//printing output
    }
}