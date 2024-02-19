# include <iostream>
# include <cmath>
// Not solved yet

using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i = 0 ; i<t ; i++)
    {
        int a;
        cin>>a;
        int arr[a];
        long int sum = 0;
        for(int j = 0; j<a ; j++)
        {
            cin>>arr[j];
        }
        for(int j = 0; j<a ; j++)
        {
            sum+=arr[j];
        }
        int flag=0;
        for(int k = 0;k<=sqrt(sum);k++)
        {
            if(k*k == sum)
            {
                flag = 1;
                break;
            }
        }
        if(flag==1)
        {
            cout<<"Yes\n";
        }
        else{
            cout<<"No\n";
        }
    }
}