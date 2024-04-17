#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    int count=0;

    while(n!=0)//test the numbers decimal digit are lucky numbers or not or how many
    {
        if(n%10==4 || n%10==7)
        {
            count++;
        }
        n=n/10;
    }
    

    if(count==4 || count==7)//number of lucky numbers are lucky number or not
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    
}