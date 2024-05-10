#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a=n/100;//if the number divided by 100 then how many times
    int b=(n%100)/20;//if the number divided by 20 then how many times(after dividing by 100)
    int c=(n%20)/10;//if the number divided by 10 then how many times(after dividing by 20(100 is divided by 20 so it doesnt matter))
    int d=(n%10)/5;//if the number divided by 5 then how many times(after dividing by 10(100 and 20 is also divided by 10))
    int e=(n%5)/1;//if the number divided by 1 then how many times(after dividing by 5(100,20 and 10 is also divided by 5))

    int sum=a+b+c+d+e;

    cout<<sum;
}