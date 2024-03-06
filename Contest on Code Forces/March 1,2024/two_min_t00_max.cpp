# include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i = 0; i<t ;i++)
    {
        int a;
        cin>>a;
        vector <int> arr(a);
        for(int j = 0; j<a ;j++)
        {
            cin>>arr[j];
        }
        sort(arr.begin(),arr.end());
        cout<<2*(abs(arr[0]-arr[a-2])+abs(arr[1]-arr[a-1]))<<'\n';
    }
}