#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int l=0,r=n-1,Sereja=0,Dima=0;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<n; i++)
    {
        if (l>r)
        {
            break;
        }
        else
        {
        if(i%2==0)
        {
            if(arr[l]>arr[r])
            {
                Sereja += arr[l];
                ++l;
            }
            else
            {
                Sereja +=arr[r];
                --r;
            }
        }
        else
        {
            if(arr[l]>arr[r])
            {
                Dima += arr[l];
                ++l;
            }
            else
            {
                Dima +=arr[r];
                --r;
            }
        }
        }
    }

    cout<<Sereja<<" "<<Dima<<endl;

    return 0;
}