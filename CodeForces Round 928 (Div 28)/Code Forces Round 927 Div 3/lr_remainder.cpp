# include <bits/stdc++.h>
using namespace std;
// Resolve it

int main()
{
    int t;
    cin>>t;
    for(int i =0 ;i<t ;i++)
    {
        int a,b;
        cin>>a>>b;
        int arr[a];
        char str[a];
        for(int j =0; j<a;j++)
        {
            cin>>arr[j];
        }
        for(int k =0 ; k<a ; k++)
        {
            cin>>str[k];
        }
        int product =1;
        for(int l=0 ; l<a; l++)
        {
            product*=arr[l];
        }
        cout<<product%b<<' ';
        int left = 0;
        int right = a-1;
        int index_str=0;
        while(index_str!=a-1)
        {
            if(str[index_str]=='L')
            {
                product = product/arr[left];
                cout<<product%b<<' ';
                left++;
                index_str++;
            }
            else{
                product=product/arr[right];
                cout<<product%b<<' ';
                right--;
                index_str++;
            }
        }
        cout<<'\n';
    }
}