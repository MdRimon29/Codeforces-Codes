#include<bits/stdc++.h>
using namespace std;
int main()
{
    string st;
    int n,count=0;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>st;

        if(st=="++X"|| st=="X++")
        {
            count=count+1;
        }
        else{
            count=count-1;
        }
    }

    cout<<count;
}