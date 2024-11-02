#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        ll k=1; //if power is 0 then 2^0=1 is always divisible for any number of n
        ll sum=1;  //if sum starts from 0 then 1 is not counted in total sum
        ll n;
        cin>>n;

        while(true)
        {
            sum=sum+pow(2,k++);
            if(n%sum==0)
            {
                cout<<n/sum<<endl;
                break;
            }
        }
    }
    
    return 0;
}