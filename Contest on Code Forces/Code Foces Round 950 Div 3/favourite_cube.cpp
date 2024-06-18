# include <bits/stdc++.h>
using namespace std;
// Not Solved 
int main()
{
    int test;
    cin>>test;
    for(int i =0; i<test; i++)
    {
        int n,f,k;
        cin>>n>>f>>k;
        vector <int> v(n);
        for(int j =0; j<n; j++)
        {
            cin>>v[j];
        }
        int fav = 0;
        for(int j =0; j<n; j++)
        {
            if(j==f-1)
            {
                fav = v[f-1];
            }
        }
        // cout<<fav<<"           "<<'\n';
        sort(v.begin(),v.end());
        int j= 0,m=v.size()-1;
        while(j<m)
        {
            int temp = v[j];
            v[j]=v[m];
            v[m]=temp;
            j++;
            m--;
        } 
        
        
        if (k==n)
        {
            cout<<"YES\n";
        }
        else if (v[k]==fav) {
            if(v[k-1]==fav)
            {
                cout<<"MAYBE\n";
            }                
            else
            {
                cout<<"NO\n";
            }
            }
        else if(v[k]>fav)
            {
                cout<<"YES\n";
            }
        else{
                cout<<"NO\n";
            }
        }
        

            
        

    }
