# include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int a;
    for(int i = 0 ; i<t ; i++)
    {
       
        cin>>a;
        int arr[a];
        int sum= 0;
        for(int j = 0; j<a ; j++)
        {
            cin>>arr[j];
            if(arr[j]>=0)
            {
                sum+=arr[j];
            }
            else{
                sum += -arr[j];
            }
        }
        cout<<sum<<'\n';

    }
}