#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x=0,calc,n,p[100];//create variable
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>p[i];//take the number 
        x=x+p[i]/100;
    }
    calc=100*(x/n);
    cout<<calc;

}