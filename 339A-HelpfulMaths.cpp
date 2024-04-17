#include<iostream>
#include<algorithm>
 
using namespace std;
int main()
{
    string s;
    cin>>s;
    int arr[100];
    int count=0;
 
    for (int i=0; i<s.length(); i++)
    {
       if(s[i]=='+')
        {
            continue;
        }
        else
        {
            arr[count]=s[i]-'0';//for char to int we subtract 0,logic ascii value
            count++;
        }
    }
    sort(arr,arr+count);
 
    for(int i=0; i<count ;i++)
    {
        if (i==count-1)//for removing last '+'
        {
            cout<<arr[i];
            break;
        }
        cout<<arr[i];
        
        cout<<"+";
    }
   
    return 0;
}