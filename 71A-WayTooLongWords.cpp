#include <bits/stdc++.h>
 
using namespace std;
 
 
void solve()
{
    string n;
    cin >> n;
    if (n.length()<=10)
    {
        cout<<n<<endl;
    }
    else
    {   
        cout<<n[0]<<n.length()-2<<n[n.length()-1]<<endl;
    }
}
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
 
    return 0;
}