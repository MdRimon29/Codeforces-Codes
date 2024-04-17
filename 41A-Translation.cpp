#include<iostream>
using namespace std;
int main()
{
    string s,t,r;
    cin>>s;
    cin>>t;
    int j=0,count=0;
   

    for(int i=s.length()-1; i>=0; i--)//for reverse the string "s"
    {
        if(t[j]==s[i])//if reverse string is equal to string "t" or not
        {
            j++;
            continue;
        }
        else
        {
            count++;
        }

    }

    if(count==0)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}