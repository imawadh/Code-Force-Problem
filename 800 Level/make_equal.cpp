# include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; 
    cin>>t;
    for(int i = 0;i<t;i++)
    {
        int a;
        cin>>a;
        int arr[a];
        int add = 0;
        for(int j = 0; j<a ;j++)
        {
            cin>>arr[j];
        }
        for(int j = 0; j<a ;j++)
        {
            add+=arr[j];
        }
        add=add/a;
        int sub = 0;
        
        for(int k=0; k<a; k++)
        {
            if(arr[k]!=add && arr[k]>add)
            {
                sub = arr[k]-add;
                if(k!=a-1)
                {
                    arr[k]=arr[k]-sub;
                    arr[k+1]+=sub;
                }
                else
                {
                    arr[k]=arr[k]+sub;
                }
            }
        }
        int flag = 1;
        for (int l = 0; l<a; l++)
        {
            if(arr[l]!=add)
            {
                flag = 0;
                break;
            }
        }
        if(flag == 0)
        {
            cout<<"No\n";
        }
        else
        {
            cout<<"Yes\n";
        }
    }
}