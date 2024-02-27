# include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i = 0; i<t ; i++)
    {
        int a ;
        cin>>a;
        vector <int> arr(a);
        int sum = 0;
        int count_1 = 0, count_2 = 0;
        for(int j = 0; j<a; j++)
        {
            cin>>arr[j];
            sum+=arr[j];
            if(arr[j]%3==1)
            {
                count_1++;
            }
            else if(arr[j]%3==2)
            {
                count_2++;
            }
        }
        int b = sum%3;
        if(b == 0)
        {
            cout<<0<<'\n';
        }
        else if ( b==1 )
        {
            if(count_1!= 0)
            {
                cout<<1<<'\n';
            }
            else{
                cout<<2<<'\n';
            }
        }
        else{
            if(count_2!=0)
            {
                cout<<1<<'\n';
            }
            else if((sum+1)%3==0)
            {
                cout<<1<<'\n';
            }
            else{
                cout<<2<<'\n';
            }
        }
    }

}