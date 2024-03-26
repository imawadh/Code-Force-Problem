# include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i =0 ;i<t; i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a==0 && b==0 && c==0)
        {
            cout<<a<<'\n';
        }
        else if(b==0 && c==0)
        {
            cout<<a<<'\n';
        }
        else if((b+c)/3==0)
        {
            cout<<-1<<'\n';
        }
        else{
            if((b+c)%3==0)
            {
            cout<<a+(b+c)/3<<'\n';
            }
            else{
                cout<<a+(b+c)/3+1<<'\n';
            }
        }
    }
}