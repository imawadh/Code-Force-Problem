# include <iostream>
using namespace std;

// Solve again Time exceded 

int main()
{
    int t;
    cin>>t;
    for(int i =0 ; i<t ; i++)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int j = 1 ; j<=n ; j++)
        {
            arr[j-1]=j;
        }
        for(int k = 0 ; k<n ; k++)
        {
            int digit = 0;
            int digit_sum_at_same_place = 0;
            while(arr[k]!=0)
            {
                digit = arr[k]%10;
                arr[k] /= 10;
                digit_sum_at_same_place = digit+digit_sum_at_same_place;
            }
            arr[k]= digit_sum_at_same_place;
        }
        int total_sum = 0;
        for(int l = 0; l<n ; l++)
        {
            total_sum+=arr[l];
        }
        cout<<total_sum<<'\n';
    }
}
