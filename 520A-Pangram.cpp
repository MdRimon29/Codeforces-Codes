#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    set<char>st;//set declare

    for(int i=0; i<n; i++)
    {
        s[i]=toupper(s[i]);//make all alphabet to uppercase
        if(s[i]>='A' && s[i]<='Z')//intsert to a set 
        {
            st.insert(s[i]);
        }
    }
    if(st.size()==26)//if all alphabet are available 
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}