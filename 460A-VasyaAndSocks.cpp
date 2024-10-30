#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    int r=(n-1)/(m-1);

    int result=(n+r);

    cout<<result<<endl;
    
    return 0;
}