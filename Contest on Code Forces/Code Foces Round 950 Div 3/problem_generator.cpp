# include <bits/stdc++.h>
using namespace std;
// Solved 
int main()
{
    int test;
    cin>>test;
    for(int i =0; i<test; i++)
    {
        int n,m;
        cin>>n>>m;
        string str;
        cin>>str;
        vector <int> v(7,0);
        for(int j = 0; j<str.size(); j++)
        {
            v[int(str[j])-65]+=1;
        }
        int ans =0;
        for(int j =0; j<7; j++)
        {
            if(v[j]<m)
            {
                ans = ans + m-v[j];
            }
        }
        cout<<ans<<'\n';
    }
}