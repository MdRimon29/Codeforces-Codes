#include <bits/stdc++.h>
using namespace std;

int main()
{
    int target,count=0;
    cin>>target;

    vector<int>arr(12);
       
    for(int i=0; i<12; i++)
    {
        cin>>arr[i];
    }

    sort(arr.begin(),arr.end(), greater<int>());

    for(int i=0; i<12; i++)
    {
        if(target==0)
        {
            cout<<0<<endl;
            break;
        }
        count=count+arr[i];
        if(count>=target)
        {
            cout<<i+1<<endl;
            break;
        }
    }
    if(count<target)
    {
        cout<<-1<<endl;
    }
    
    return 0;
}