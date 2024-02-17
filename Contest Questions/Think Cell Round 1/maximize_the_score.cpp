# include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i = 0;i<t; i++)
    {
        int a;
        cin>>a;
        int arr[2*a];
        int score=0;
        for(int k = 0; k<2*a;k++)
        {
            cin>>arr[k];
        }
        int n = sizeof(arr) / sizeof(arr[0]);
        sort(arr,arr+n);
        for(int j =0 ; j<2*a;j+=2)
        {
            if(arr[j]>=arr[j+1])
            {
                score+=arr[j+1];
            }
            else{
                score+=arr[j];
            }
        }
        cout<<score<<'\n';

    }
}