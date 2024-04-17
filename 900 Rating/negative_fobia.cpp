// not solved 

# include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    for (int i= 0;i<test; i++)
    {
        int num;
        cin>>num;
        vector <int> arr(num);
        for (int j = 0;j<num; j++ )
        {
            cin>>arr[j];
        }

        // for(int l=0;l<num;l++){
        //     cout<<arr[l]<<" ";
        // }





        int count = 0;

        for (int j = 0;j<num; j++ )
        {
            long long int sum = 0;
            for (int k = j; k<num; k++)
            {
                sum+=arr[k];
                if(sum>=0){
                    // cout<<sum <<' ';
                    count+=1;
                }
            }
            // cout<<count<<" ";
        
        }
        cout<<count<<'\n';
        
    }
}