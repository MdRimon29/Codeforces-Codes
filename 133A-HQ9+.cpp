#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1;
    cin>>s1;
    int count=0;

    for(int i=0; i<s1.length(); i++)
    {
        if(s1[i]=='H' || s1[i]=='Q' || s1[i]=='9' )
        {
            count++;
            break;
        }
    }
    if(count==0)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
    return 0;
}