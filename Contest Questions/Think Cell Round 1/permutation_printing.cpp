# include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i = 0; i<t; i++)
    {
        int a;
        cin>>a;
        int b = a;
        int arr[a];
        int first=1;
        if(a%2==0)
        {
            for(int j =0 ;j<a;j+=2)
            {
                arr[j]=b;
                b--;
                arr[j+1]=first;
                first++;

            }
        }
        else
        {
            for(int j =0 ;j<a-1;j+=2)
            {
                arr[j]=b;
                b--;
                arr[j+1]=first;
                first++;

            }
            arr[a-1]=a/2+1;
        }
    for(int k = 0;k<a;k++)
    {
        cout<<arr[k]<<' ';
    }
    }
    
}