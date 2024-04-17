#include<iostream>
using namespace std;
 
int main()
{
    int n,k;
    cin>>n;
    cin>>k;
    int arr[n];
 
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    
    int num;
    num=arr[k-1];
    int count=0;
    
    for(int y=0; y<n; y++)
    {
        if(arr[y]>=num && arr[y]>=1)
        {
            count++;
        }
    }
    if(count>=1)
    {
        cout<<count;
    }
    else
    {
        cout<<0;
    }
}