# include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        vector <long long int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        if(arr[0]==1 && n==1)
        {
            cout<<0<<'\n';
            continue;
        }
        for(int i=1;i<n;i++)
        {
            arr[i]+=arr[i-1];
        }
        int ans = 0;
        if(arr[0]==0) ans =1;
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<' ';
        }
        cout<<endl;
        long long int temp = arr[0];
        for(int i=1;i<n;i++)
        {
            for (int j=0; j<=i; j++)
            {
                if(j!=0)
                {
                    temp = arr[j]-arr[j-1];
                }
                if(arr[j]*2==temp)
                {
                    cout<<i<<' '<<j<<'\n';
                    ans+=1;
                }
            }
        }
        cout<<ans<<'\n';
    }
}