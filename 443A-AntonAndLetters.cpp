#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    
    set<char>ch;//use set for store all the different charecters 

    getline(cin, str);//charecter-delimited string and store that in str variable
    
    for(int i=0; i<str.size(); i++)
    {
        if(str[i]>='a' && str[i]<='z')//how many different charecter in the string
        {
            ch.insert(str[i]);
        }
    }

    cout<<ch.size();

    return 0;

}