#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,count0=0,count1=0;
    cin>>n;

    string s;
    cin>>s;    

    for(int i=0; i<n; i++)
    {
        if(s[i]=='0')
        {
            ++count0;
        }
        else
        {
            ++count1;
        }
    }

    int result=abs(count0-count1);

    cout<<result<<endl;
    
    return 0;
}