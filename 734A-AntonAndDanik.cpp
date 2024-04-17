#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,Anton=0,Danik=0;
    cin>>n;
    string s;//create string
    cin>>s;
    
    for(int i=0; i<n; i++)
    {
        if(s[i]=='A')//calculate how many match win by Anton and Danik
        {
            Anton++;
        }
        else
        {
            Danik++;
        }
    }

    if(Anton>Danik)//print the result by these calculation
    {
        cout<<"Anton";
    }
    else if(Danik>Anton)
    {
        cout<<"Danik";
    }
    else
    {
        cout<<"Friendship";
    }
}