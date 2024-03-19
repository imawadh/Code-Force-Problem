# include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i =0 ;i<t ;i++)
    {
        int a;
        cin>>a;
        string str = "aaa";
        if(a<=28)
        {
            str[0]='a';
            str[1]='a';
            str[2]=char(94+a);
        }
        else{
            int count_z = a/26;
            
        }
        cout<<str<<'\n';
    }
}