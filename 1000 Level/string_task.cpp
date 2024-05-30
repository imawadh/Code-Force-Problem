# include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    for(int i=0; i<str.size(); i++)
    {
        if(str[i]=='A'||str[i]=='a' || str[i]=='O'||str[i]=='o'||str[i]=='Y'||str[i]=='y' || str[i]=='E'||str[i]=='e'||str[i]=='U'||str[i]=='u' || str[i]=='I'||str[i]=='i')
        {
            continue;
        }
        else if(int(str[i])<=90)
        {
            cout<<'.'<<char(int(str[i])+32);
        }
        else{
            cout<<'.'<<str[i];
        }
    }
}