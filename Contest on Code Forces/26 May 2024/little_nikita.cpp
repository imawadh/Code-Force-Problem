# include <bits/stdc++.h>
using namespace std;
// Solved 
int main()
{
    int test;
    cin>>test;
    for(int i =0;i<test; i++)
    {
        int n,m;
        cin>>n>>m;
        if(n==m)
        {
            cout<<"YES\n";
        }
        else if(n>m)
        {
            if((n-m)%2==0)
            {
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }
        }
        else{
            cout<<"NO\n";
        }
    }
}