#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,max=0;
        cin>>n;
        int arr[n];
        for(int i=1; i<=n; i++)
        {
            cin>>arr[i];

            if(i%2!=0)
            {
                if(arr[i]>max)
                {
                    max=arr[i];
                }
            }
        }
        cout<<max<<endl;
    }
    return 0;
}