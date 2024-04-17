#include<iostream>
using namespace std;
int main()
{
    int y;
    cin>>y;
    int a,b,c,d;

    while(true)
    {
        y=y+1;//increase the input and then the value
        a=y/1000;//break all the digit in a single part
        b=y/100 % 10;
        c=y/10 % 10;
        d=y%10;
        

        if(a!=b && a!=c && a!=d && d!=b && b!=c && c!=d)//all is different or not
        {
            break;
        }
    }
    cout<<y;
}