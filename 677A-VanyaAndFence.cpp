#include<iostream>
using namespace std;
int main()
{
    int n,h,count=0;
    cin>>n>>h;
    int a[n];
    for(int i=0; i<n; i++)//take input and create array
    {
        cin>>a[i];
    }
    for(int i=0; i<n; i++)//count how many times,if height is less than or equal to the height of fench then count 1 else count 2.
    {
        if(a[i]<=h)
        {
            count++;
        }
        else
        {
            count=count+2;
        }
    }

    cout<<count;
}