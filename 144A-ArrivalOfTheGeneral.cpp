#include<bits/stdc++.h>
using namespace std;
int main()
{
    int d,max=0,min=100,x,y,s,r;
    cin>>d;
    int arr[d];
    
    for(int i=1; i<=d; i++)
    {
        cin>>arr[i];
        //min=arr[1];
        if(max<arr[i])
        {
            max=arr[i];
            x=i;//index of min value
            s=i-1;//swap time
        }
        if(arr[i]<=min)
        {
            min=arr[i];
            y=i;//index of min value
            r=d-y;//swap time
        }
        
    }
    if(y>x)//if index dont overlap each other
    {
        cout<<s+r;
    }
    else
    {
        cout<<s+r-1;//-1 because they overlap.so one swap time counted additionally
    }

    return 0;
}