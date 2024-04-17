#include<iostream>
using namespace std;
int main()
{
    int n,count=0;
    string s;
    cin>>n>>s;
 
    for(int i=1; i<n; i++)
    {
        if(s[i-1]==s[i])//how many time alongside two numbers are equal
        {
            count++;
        }
    }
    cout<<count;
 
    return 0;
}