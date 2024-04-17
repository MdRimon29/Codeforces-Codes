#include<iostream>

using namespace std;

int main()
{
    int n,a,b,max=0,sum=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a>>b;//take input
        sum=sum+b-a;//calc for max passenger in train
        if(max<sum)//max or not
        {
            max=sum;
        }
    }

    cout<<max;
}