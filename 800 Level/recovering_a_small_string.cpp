# include <bits/stdc++.h>
# include <string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i = 0; i<t ; i++)
    {
        int a;
        cin>>a;
        char str[3];
        if(a<=28)
        {
            str[0]=char(97);
            str[1]=char(97);
            str[2]=char(97+(a-2));
        }
        cout<<str;
    }
}