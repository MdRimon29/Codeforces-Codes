#include <bits/stdc++.h>
 
using namespace std;
int  main()
{
    int m[5][5];
 
    for (int i=0; i<5; i++)//input for matrix
    {
        for (int j=0; j<5; j++)
        {
            cin>>m[i][j];
            if (m[i][j]==1)
            {
                cout<<abs (i-2)+abs (j-2);
            }
        }
    }
 
    return 0;
}