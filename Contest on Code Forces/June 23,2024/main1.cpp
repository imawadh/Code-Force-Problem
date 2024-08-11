# include <bits/stdc++.h>
using namespace std;
// Done 
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int size =3;
        vector <int> v(size);
        for(int i =0; i<size; i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        cout<<abs(v[0]-v[1])+abs(v[1]-v[2])<<'\n';
    }
}