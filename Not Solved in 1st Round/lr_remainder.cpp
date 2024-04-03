# include <bits/stdc++.h>
using namespace std;
// nOT sOLVED 
int main()
{
    int t;
    cin>>t;
    for(int i =0 ;i<t; i++)
    {
        int n,m;
        cin>>n>>m;
        vector <int> arr(n);
        string str;
        int product = 1;
        for(int j = 0; j<n ; j++)
        {
            cin>>arr[j];
            product*=arr[j];
        }
        cin>>str;
        cout<<product%m<<' ';
        int last = n-1;
        for(int j = 0; j<n ; j++)
        {
            if(str[j]=='L')
            {
                product/=arr[j];
            }
            else{
                product/=arr[last];
                last--;
            }
            cout<<product%m<<' ';
        }
        cout<<endl;
    }
}