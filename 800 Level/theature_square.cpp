# include <bits/stdc++.h>
// Not Solved 
using namespace std;
int main()
{
    int n,m,a;
    cin>>n>>m>>a;
    if(n<=a && m<=a)
    {
        cout<<1<<'\n';
    }
    else if(n<=a && m>a){
        if(m%a==0)
        {
            cout<<m/a<<'\n';
        }
        else{
            cout<<m/a+1<<'\n';
        }
    }
    else if(n>a && m<=a)
    {
        if(n%a==0)
        {
            cout<<n/a<<'\n';
        }
        else{
            cout<<n/a+1<<'\n';
        }
    }
    else{
        int count = 0;
        while(n>a || m>a)
        {
            
        }
    }
}