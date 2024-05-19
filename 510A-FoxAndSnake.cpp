#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row,col,eo;
    cin>>row>>col;

    for(int i=1; i<=row; i++)
    {
        for(int j=1; j<=col; j++)
        {
            if(i%2!=0)
            {
                cout<<"#";
            }
            else
            {
                if(i%4==0)
                {
                    if(j==1)
                    {
                        cout<<"#";
                    }
                    else
                    {
                        cout<<".";
                    }
                }
                else
                {
                    if(j==col)
                    {
                        cout<<"#";
                    }
                    else{
                        cout<<".";
                    }
                }
            }
        }
        cout<<endl;
    }
    return 0;
}