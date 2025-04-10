#include<bits/stdc++.h>
using namespace std;

void func()
{
    string str;
    cin>>str;

    for(int i=0; i<str.size()-1; i++)
    {
        if(str[i]==str[i+1])
        {
            cout<<1<<endl;
            return ;
        }
    }
    cout<<str.size()<<endl;
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        func();
    }

    return 0;
}