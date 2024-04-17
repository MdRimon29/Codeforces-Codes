#include<iostream>
#include<algorithm>
#include<cctype>

using namespace std;

int main()
{
    string s;
    cin>>s;

    int countU=0;
    int countL=0;

    for(int i=0; i<s.length(); i++)//for checking how many uppercase or lowercase letter
    {
        if(isupper(s[i]))
        {
            countU++;
        }
        else
        {
            countL++;
        }
    }
    
    if(countU>countL)
    {
        transform(s.begin(),s.end(),s.begin(), ::toupper);//convert uppercase 

        cout<<s<<endl;
    }
    else
    {
        transform(s.begin(),s.end(),s.begin(), :: tolower);
        cout<<s<<endl;
    }

    return 0;
}