#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int num;
        cin>>num;
        int sum=(num%10)+(num/10);
        
        cout<<sum<<endl;
    }
    return 0;
}