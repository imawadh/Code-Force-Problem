# include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; 
    cin>>t;
    for(int i = 0; i<t; i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int d = b%3;
        if(d<=c){
            cout<<a+(b+c-d)/3+(c-d)/3+c%3<<'\n';
        }
        else
        {
            cout<<-1<<'\n';
        }
    }
}