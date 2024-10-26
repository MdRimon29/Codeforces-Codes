#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,num1,num2;
    cin>>n;
    int num3=n;

    num2=n/10;
    num3=n/100;
    num1=num3*10+n%10;

    if(n>=0)
    {
        cout<<n<<endl;
    }
    else
    {
        if(num1>num2)
        {
            cout<<num1<<endl;
        }
        else
        {
            cout<<num2<<endl;
        }
    }
    
    return 0;
}