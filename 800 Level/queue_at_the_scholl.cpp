# include <bits/stdc++.h>
using namespace std;
// not Solved

int main()
{
    int a,b;
    cin>>a>>b;
    string str;
    cin>>str;
    for (int j =0 ; j<b ; j++)
    {
    for(int i = a-1; i>0; i--)
    {
        if(str[i]=='G')
        {
            char a = str[i];
            char b = str[i-1];
            str[i]=b;
            str[i-1]=a;
        }
        
    }
    }
    cout<<str;

}