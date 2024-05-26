# include <bits/stdc++.h>
// Solved 
using namespace std;
int main()
{
    int test;
    cin>>test;
    for (int i =0; i<test ; i++)
    {
        int x,y,n;
        cin>>x>>y>>n;
        vector <int> arr(n);
        int a = 1;
        arr[0]=x;
        arr[n-1]=y;
        for(int j = n-2;j>0; j-- )
        {
            arr[j] = arr[j+1]-a;
            a++;
        }
        bool flag = true;
        for (int j = 1; j<n-1; j++)
        {
            if(arr[j]-arr[j-1]<=arr[j+1]-arr[j])
            {
                cout<<-1<<'\n';
                flag = false;
            }
        }
        if(flag==true){
            for (int j = 0; j<n ; j++)
            {
                cout<<arr[j]<<' ';
            }
            cout<<'\n';
        }
        
    }


}