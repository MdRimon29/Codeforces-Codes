#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,result=0;
    cin>>n;

    string s,s2;
    cin>>s;    

    for(int i=0; i<n; i++)
    {
        int count=0;
        for(int j=0; j<n; j++)
        {
            if(s[i]==s[j] && s[i+1]==s[j+1])
            {
                count++;
            }
            if(count>result)
            {
                result=count;
                s2=string(1,s[j])+string(1,s[j+1]);
            }
        }
    }

    cout<<s2<<endl;
    
    return 0;
}