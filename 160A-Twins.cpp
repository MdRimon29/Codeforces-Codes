#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0,count=0,total=0;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        
        total +=arr[i];
    }
    sort(arr.begin(),arr.end(),greater<int>());
    for(int i=0; i<n; i++)
    {
        sum +=arr[i];
        count++;
        if(sum>total-sum)
        {
            break;
        }
    }
    cout<<count<<endl;

    return 0;
}