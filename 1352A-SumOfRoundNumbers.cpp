#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,arr[100000];
    cin>>t;

    for(int i=0; i<t; i++)
    {
        cin>>n;
        int rem=0;
        int k=0;

        if(n>=1000)
        {
            k++;
            rem=n%1000;
            arr[k]=n-rem;
            n=n%1000;
        }
        if(n>=100)
        {
            k++;
            rem=n%100;
            arr[k]=n-rem;
            n=n%100;
        }
        if(n>=10)
        {
            k++;
            rem=n%10;
            arr[k]=n-rem;
            n=n%10;
        }
        if(n>0 && n<10)
        {
            k++;
            arr[k]=n;
        }

        cout<<k<<endl;
        for(int j=1; j<=k; j++)
        {
            cout<<arr[j]<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}