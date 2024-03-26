# include <bits/stdc++.h>
// not solved
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i = 0 ; i<t; i++)
    {
        int n,m,k;
        cin>>n>>m>>k;
        vector <int> a(n+m);
        for(int j = 0; j<n+m ; j++)
        {
            cin>>a[j];
        }
        sort(a.begin(),a.end());
        
        int b = 1;
        int flag = 1;
        while(b!=k)
        {
            if(a[b]==a[b-1])
            {
                b++;
                k++;
                continue;
            }

            else if(a[b-1]!=b )
            {
                flag = 0;
                break;
            }

            b++;
        }
        if(flag==0)
        {
            cout<<"No\n";
        }
        else{
            cout<<"YES\n";
        }
    }
}