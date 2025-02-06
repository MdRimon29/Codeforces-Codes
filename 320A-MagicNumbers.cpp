#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int count=0;

    for(int i=0; i<s.length(); i++)
    {
        if(s[0]!='1' || (s[i]!='1' && s[i]!='4') || (s[i]=='4' && s[i+1]=='4' && s[i+2]=='4'))
        {
            count++;
            break;
        }
    }
    if(count==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

}