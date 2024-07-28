#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,y,sum=0;
        cin>>n;
        for(int x=2; x<=n; x++)
        {
            int sum2=0;
            for(int k=1; k*x<=n; k++)
            {
                sum2=sum2+k*x;
            }
            if(sum<sum2)
            {
                sum=sum2;
                y=x;
            }
        }
        cout<<y<<endl;
    }
    return 0;
}