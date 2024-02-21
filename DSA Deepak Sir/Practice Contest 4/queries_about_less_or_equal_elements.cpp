# include <bits/stdc++.h>
using namespace std;
// Test cases failed 

int main()
{
    int a,b;
    cin>>a>>b;
    int arr1[a];
    int arr2[b];
    for(int i = 0 ; i<a ; i++)
    {
        cin>>arr1[i];
    }
    for(int k = 0 ; k<b ; k++)
    {
        cin>>arr2[k];
    }
    int count;
        
    for(int j = 0; j<b ; j++ )
    {
        count = 0;
        for (int k =0 ;k<a ; k++)
        {
            if(arr1[k]<=arr2[j])
            {
                count+=1;
            }
        }
        cout<<count<<' ';
    }

}