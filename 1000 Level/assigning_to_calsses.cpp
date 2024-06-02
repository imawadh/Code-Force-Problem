# include <bits/stdc++.h>
using namespace std;
// solved 
int main()
{
    int test;
    cin>>test;
    for(int i =0; i<test; i++)
    {
        int num;
        cin>>num;
        vector <int> v(2*num);
        for(int i = 0; i<2*num; i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        cout<<abs(v[v.size()/2-1]-v[v.size()/2])<<'\n';
    }
}