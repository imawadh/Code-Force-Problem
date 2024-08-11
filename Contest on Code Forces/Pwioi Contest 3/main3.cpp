# include <bits/stdc++.h>
using namespace std;
int main(){
    int x,y,a,b;
    cin>>x>>y>>a>>b;
    for(int i=2; i<=y; i++)
    {
        for(int j=1; j<i; j++)
        {
            cout<<i<<' '<<j<<'\n';
        }
    }
}