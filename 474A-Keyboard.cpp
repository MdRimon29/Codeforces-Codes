#include <bits/stdc++.h>
using namespace std;

int main()
{
    char c;
    cin>>c;

    string s,s2,result;
    cin>>s;

    int index;

    s2="qwertyuiopasdfghjkl;zxcvbnm,./";

    for(int i=0; i<s.length(); i++)
    {
        if(c=='R')
        {
            index=s2.find(s[i]);

            result=result+s2[index-1];
        }
        else
        {
            index=s2.find(s[i]);

            result=result+s2[index+1];
        }
    }

    cout<<result<<endl;
    
    return 0;
}