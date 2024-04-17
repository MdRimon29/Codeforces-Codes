#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,q,count=0;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>p>>q;
        
        if(q-p>=2)//is there enough space for both of them or not
        {
            count++;
        }
    }
    cout<<count;

    return 0;

}