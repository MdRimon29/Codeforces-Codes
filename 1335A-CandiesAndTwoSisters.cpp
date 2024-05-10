#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long int n,a;
    cin>>t;

    while(t--)
    {
        cin>>n;
        if(n<3)
        {
            cout<<"0"<<endl;
        }
        else
        {
            a=(n-1)-(n/2);//number count from n/2 to n-1 according to their rules
            cout<<a<<endl;
        }
    }
    return 0;
}