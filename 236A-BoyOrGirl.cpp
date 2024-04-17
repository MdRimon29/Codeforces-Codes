#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    
    sort(s.begin(), s.end());//sort our string

    for(int i=0; i<s.size(); i++)
    {
        if(s[i]==s[i+1])//alongside two charecter are equal or not 
        {
            s.erase(i,1);//if equal then erase the first and only charecter

            i--;//decrease our i,otherwise it skip to compare previos i+1 th charecter with the next one
        }
    }

    int z=s.size();//new size of our string
    
    if(z%2==0)//if the number even
    {
        cout<<"CHAT WITH HER!";
    }
    else
    {
        cout<<"IGNORE HIM!";
    }

    return 0;
}