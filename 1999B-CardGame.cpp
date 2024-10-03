#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a1,a2,b1,b2,count=0;
        cin>>a1>>a2>>b1>>b2;
        if(a1>b1 && a2>=b2)
        {
            count += 1;
        }
        else if(a1>=b1 && a2>b2)
        {
            count += 1;
        }
        if(a1>b2 && a2>=b1)
        {
            count += 1;
        }
        else if(a1>=b2 && a2>b1)
        {
            count += 1;
        }
        if(a2>b2 && a1>=b1)
        {
            count += 1;
        }
        else if(a2>=b2 && a1>b1)
        {
            count += 1;
        }
        if(a2>b1 && a1>=b2)
        {
            count += 1;
        }
        else if(a2>=b1 && a1>b2)
        {
            count += 1;
        }

        cout<<count<<endl;
    }
    return 0;
}