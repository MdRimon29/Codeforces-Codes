#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>n>>t;
    string s;
    cin>>s;

    for(int i=0; i<t; i++)//loop for times
    {
        for(int j=0; j<n; j++)
        {
            if(s[j]=='B' && s[j+1]=='G')//check and swap the number
            {
                s[j]='G';
                s[j+1]='B';
                j++;
            }
        }
    }

    cout<<s;

    
}