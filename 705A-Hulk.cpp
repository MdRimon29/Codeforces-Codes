#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s,sf,sm,sl;//making the fixed part
    sf="I hate ";
    sl="it";
    if(n==1)
    {
        cout<<"I hate it";//for n==1
    }
    else
    {
        for(int i=2; i<=n; i++)
        {
            if(i%2==0)
            {
                sm=sm+"that I love ";//if the n is even then add this part
            }
            else
            {
                sm=sm+"that I hate ";//if the n is odd then add this part
            }
        }

        s=sf+sm+sl;//add all string

        cout<<s;
    }
}