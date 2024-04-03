# include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string str = "aaa";
    for(int i =0 ; i<t; i++)
    {
        int a;
        cin>>a;
        
        a-=2;
        int count_z = a/26;
        if(count_z==0)
        {
            str[2]=char(94+a);
        }
        else if(count_z==1)
        {
            str[2]='z';
            str[1]=char(94+a-26);
        }
        else{
            str[2]='z';
            str[1]='z';
            str[0]=char(94+a-52);
        }
    }
    cout<<str;
}