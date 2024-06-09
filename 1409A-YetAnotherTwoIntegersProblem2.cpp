#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,num;
    cin>>t;

    while (t--)
    {
        cin>>a>>b;
        num=abs(a-b);
        
        cout<<(num+9)/10<<endl;
    }
    
    return 0;
}