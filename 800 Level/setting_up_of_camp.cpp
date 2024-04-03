# include <bits/stdc++.h>
using namespace std;
// Solved
int main()
{
    int t;
    cin>>t;
    for(int i =0 ;i<t; i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(b%3==0 && c%3==0)
        {
            cout<<a+b/3+c/3<<'\n';
        }
        else if(b%3==0 && c%3!=0)
        {
            cout<<a+b/3+c/3+1<<'\n';
        }
        else if((b+c)%3==0)
        {
            cout<<a+(b+c)/3<<'\n';
        }
        else if((b+c)/3>0 && (b%3 + c) >=3)
        {
            cout<<a+(b+c)/3+1<<'\n';
        }
        else{
            cout<<-1<<'\n';
        }
    }
}