#include<iostream>
using namespace std;
int main()
{
    int a,b,count=0;
    cin>>a>>b;
 
    if(a==b)
    {
        cout<<"1";
    }
    else
    {
        for(int i=1; i>0; i++)
        {
            if(a<b)
            {
                a=3*a;
                b=2*b;
            }
            else
            {
                break;
            }
            count ++;
        }
        if(a==b)
        {
            cout<<count+1;
        }
        else
        {
            cout<<count;
        }
    }
    
    return 0;
}