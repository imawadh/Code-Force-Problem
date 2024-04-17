// Solved 
# include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    for (int i = 0; i<test; i++)
    {
        int num;
        cin>>num;
        vector <int> arr(num);
        for (int j = 0;j<num; j++)
        {
            cin>>arr[j];
        }
        
        for (int j = 1,k=num-1;k-j>0; j++,k--)
        {
            int sum = arr[k]+arr[j];
            arr[k]=sum-arr[k];
            arr[j]=sum-arr[j];
        }
        int sum = 0;
        int flag = true;
        for (int j = 0;j<num-1; j++)
        {
            sum+=arr[j];
            if(sum==arr[j+1])
            {
                flag = false;
                break;
            }
        }
        if(flag==false)
        {
            cout<<"NO";
        }
        else{
            cout<<"YES"<<'\n';
            for (int j = 0; j<num; j++)
            {
                cout<<arr[j]<<' ';
            }
        }
        cout<<'\n';
    }
}