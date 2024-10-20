#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,count=1,maximum=1;
    cin>>n;
    int arr[n];

    for(int i=0; i<n ; i++)
    {
        cin>>arr[i];
    }

    for(int i=0; i<n ; i++)
    {
        if(i>0)
        {
            if(arr[i]>=arr[i-1])
            {
                count++;
                maximum=max(maximum,count);
            }
            else{
                count=1;
            }
        }
    }

    cout<<maximum<<endl;
    
    return 0;
}