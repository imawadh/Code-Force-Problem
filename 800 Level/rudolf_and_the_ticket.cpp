# include <bits/stdc++.h>
using namespace std;
// Solved
int main()
{
    int z;
    cin>>z;
    for(int y= 0; y<z ; y++)
    {
    int n,m,k;
    cin>>n>>m>>k;
    vector <int> left(n);
    vector <int> right(m);
    for(int i = 0 ; i<n ;i++)
    {
        
        cin>>left[i];
        
    }
    for(int i = 0 ; i<m ;i++)
    {
        
        cin>>right[i];
        
    }
    int count = 0;
    for(int i = 0; i<n; i++)
    {
        for(int j =0 ; j<m; j++)
        {
           
            if(left[i] + right[j]<=k)
            {
                count++;
            }
        }
    }
    cout<<count<<'\n';
    }
}