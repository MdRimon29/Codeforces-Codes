#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0,num,temp=0,conti=0;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>num;
        
        if(num>0)
        {
            conti=conti+num;
            continue;
        }
        if(conti>0)
        {
            conti--;
            continue;
        }
        else
        {
            temp++;
        }
    }
    cout<<temp;

    return 0;
}