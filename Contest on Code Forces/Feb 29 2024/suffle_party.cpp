# include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i = 0 ; i<t ; i++)
    {
        int a;
        cin>>a;
        vector <int> arr(a);
        for(int j = 0 ; j<a; j++)
        {
            arr[j]=j+1;   
        }
        int index_of_1 = arr[0];
        for(int j = 1; j<=a ; j++)
        {
            for(int k = a/2; k>=1 ; k--)
            {
                if(arr[j]%k==0)
                {
                    arr[j]+=k;
                    
                }
            }
        }


    }
}