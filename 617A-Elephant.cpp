#include<iostream>
using namespace std;
int main()
{
    int x,steps;
    cin>>x;
 
    if(x%5==0)
    {
        steps=x/5;
        cout<<steps;
    }
    else
    {
        steps=(x/5)+1;
        cout<<steps;
    }
 
    return 0;
}