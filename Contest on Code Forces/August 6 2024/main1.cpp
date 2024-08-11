# include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        vector <pair<int,int>> v(a);
        for(int i =0; i<a; i++)
        {
            int x,y;
            cin>>x>>y;
            v[i]={x,y};
        }
        if(v[0].first-0>=b)
        {
            cout<<"YES\n";
            continue;
        }
        bool flag = 0;
        for(int i =1; i<a; i++)
        {
            if(v[i].first-v[i-1].second>=b){
                cout<<"YES\n";
                flag = 1;
                break;
            }
        }
        if(!flag){
        if(c-v[a-1].second>=b)
        {
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }}

    }
}