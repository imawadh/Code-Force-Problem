# include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int n,k;
        cin>>n>>k;
        vector <int> arr(n);
        // Taking n inputs in the vector

        for(int j =0 ; j<n ; j++)
        {
            cin>>arr[j];
        }
        int flag = 1;
        // Check 1 -- whether it is present in ascending or not ? 
        for(int j =1 ; j<n ; j++)
        {
            if(arr[j]>=arr[j-1])
            {
                flag = 1;
            }
            else
            {
                flag = 0;
                break;
            }
        }
        if(flag==1)
        {
            cout<<"YES\n";
            continue;
        }
        else
        {
            cout<<"NO\n";
        }
        // Breaking into sub - array form 
        


    }
}