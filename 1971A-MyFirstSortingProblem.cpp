#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        cin>>y;

        if(x>y)
        {
            
            cout<<y<<" "<<x<<endl;
        }
        else if(x<y)
        {
            
            cout<<x<<" "<<y<<endl;
        }
        else
        {
            
            cout<<x<<" "<<y<<endl;
        }
    }

    return 0;
}