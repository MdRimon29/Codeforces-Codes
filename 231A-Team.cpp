#include<iostream>
using namespace std;
int main()
{
    int test;
    cin>>test;
    int count=0;
 
    for(int i=0; i<test; i++)
    {
        int Petya,Vasya,Tonya;
        
        cin>>Petya;
        cin>>Vasya;
        cin>>Tonya;
 
        if(Petya+Vasya+Tonya>=2)
        {
            count++;
        }
 
    }
 
    cout<<count;
 
    return 0;
}