#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,num;
    cin>>t;

    while (t--)
    {
        int count=0;
        cin>>a>>b;
        num=abs(a-b);
        int temp=num/10;
        if(num%10==0)
        {
            count=count+temp;
        }
        else
        {
            count=count+temp+1;
        }
        
        cout<<count<<endl;
    }
    
    return 0;
}