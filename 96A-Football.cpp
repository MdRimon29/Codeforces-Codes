#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int count=0;

    string s2="1111111";
    string s3="0000000";

    if(s.find(s2) != string::npos) //how to use find function for a justify a string is substring for another string or not
    {
        cout<<"YES";
    }
    else if(s.find(s3) != string::npos)
    {
        cout<<"YES";
    }
    else 
    {
        cout<<"NO";
    }

    return 0;
}