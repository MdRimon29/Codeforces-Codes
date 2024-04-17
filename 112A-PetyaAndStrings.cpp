#include<iostream>
#include<cctype>//to use uppercase or lowercse
using namespace std;
int main()
{
    string s,r;
    cin>>s;
    cin>>r;
 
    for(int i=0; i<s.length(); i++) //for the first string
    {
        s[i]=toupper(s[i]); //make all value in uppercase
        r[i]=toupper(r[i]);
    }
 
    if(s<r)
    {
        cout<<"-1";
    }
 
    else if(s>r)
    {
        cout<<"1";
    }
 
    else
    {
        cout<<"0";
    }
    
 
    return 0;
}