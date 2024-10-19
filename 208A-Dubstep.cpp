#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1;
    bool istrue=true;
    cin>>s1;
    for(int i=0; i<s1.length(); i++)
    {
        if(s1[i]=='W' && s1[i+1]=='U' && s1[i+2]=='B')
        {
            i=i+2;
            if(!istrue)
            {
                cout<<" ";
            }
            continue;
        }
        else{
            istrue=false;
            cout<<s1[i];
        }
        
    }
    return 0;
}