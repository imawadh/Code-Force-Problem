# include <bits/stdc++.h>
using namespace std;
// not solved
int main()
{
    int t;
    cin>>t;
    vector <int> arr;
    for(int i = 0; i<t; i++)
    {
        cin>>arr[i];
    }
    int recruted = 0;
    for(int i =0 ; i< arr.size();)
    {
        if(arr[i]<0)
        {
            recruted+=abs(arr[i]);
            i++;
        }
        else{
            int j = 0;
            int m = arr[i];
            while(j<m)
            {
                i++;
                if(arr[i]<0)
                {
                    j++;
                    recruted+=abs(arr[i]);
                }
                else{
                    m+=arr[j];
                }
            }
        }
    }
    cout<<recruted;
    
}