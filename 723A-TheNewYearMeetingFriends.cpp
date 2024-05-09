#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x1,x2,x3,mid,max,min,result;
    cin>>x1>>x2>>x3;

    max=x1;
    min=x1;
    mid=x1;

    if(x1<x2 && x2>x3)
    {
        max=x2;
        if(x1<x3)
        {
            min=x1;
            mid=x3;
        }
        else
        {
            min=x3;
            mid=x1;
        }
    }
    if(x1>x3 && x1>x2)
    {
        max=x1;
        if(x2<x3)
        {
            min=x2;
            mid=x3;
        }
        else
        {
            min=x3;
            mid=x2;
        }
    }
    if(x3>x1 && x3>x2)
    {
        max=x3;
        if(x2<x1)
        {
            min=x2;
            mid=x1;
        }
        else
        {
            min=x1;
            mid=x2;
        }
    }

    result=(mid-min)+(max-mid);

    cout<<result;
    return 0;
}