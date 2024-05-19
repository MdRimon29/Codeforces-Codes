#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b,c,d;
    
    cin>>a;
    cin>>b;
    cin>>c;

    d=a+b;//add two string 

    sort(d.begin(),d.end());//sort both of string
    sort(c.begin(),c.end());

    if(c==d)//if the string is equal or not
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    
    return 0;
}