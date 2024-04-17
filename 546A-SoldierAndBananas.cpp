#include<iostream>
using namespace std;
int main()
{
    int k,n,w,needed=0,borrow;
    cin>>k>>n>>w;
    
    for(int i=1; i<=w; i++)//how many dollar need for buying total amount of bananas
    {
        needed=needed+i*k;
    }

    borrow=needed-n;

    if(borrow>=0)
    {
        cout<<borrow;
    }
    else
    {
        cout<<0;
    }

    return 0;
}