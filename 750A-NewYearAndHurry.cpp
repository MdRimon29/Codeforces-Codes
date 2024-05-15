#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,time=240,solveTime,totalSolve=0;
    cin>>n;
    cin>>k;

    solveTime=time-k;
    for(int i=1; i<=n; i++)
    {
        if(solveTime>=5*i)
        {
            solveTime=solveTime-5*i;
            totalSolve++;
        }
        else{
            break;
        }
    }

    cout<<totalSolve<<endl;

    return 0;
}