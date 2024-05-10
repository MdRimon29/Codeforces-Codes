#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
    int p;
    cin>>p;
    
    set<int>s;//define a set
    
    int a1[p];
    for(int i=0; i<p; i++)
    {
        cin>>a1[i];
        s.insert(a1[i]);//insert the element of first array element in the set 
    }
    
    int q;
    cin>>q;
    int a2[q];
    for(int i=0; i<q; i++)
    {
        cin>>a2[i];
        s.insert(a2[i]);//insert the element of second array in the set
    }
    

    if(s.size()==n)//if the total element of set is equal to total element of n 
    {
        cout<<"I become the guy.";
    }
    else{
        cout<<"Oh, my keyboard!";
    }

    return 0;
}