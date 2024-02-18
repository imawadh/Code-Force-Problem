# include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i =0 ; i<t;i++)
    {
        int a;
        cin>>a;
        char arr[a];
        for(int j = 0; j<a ;j++)
        {
            cin>>arr[j];
        }
        int steps=0;
        for(int k = 0;k<a;k++)
        {
            if(arr[k]=='*' && arr[k+1]=='*')
            {
                break;
            }
            else
            {
                steps+=1;
            }
        }
        int no_of_coin=0;
        for(int l = 0 ;l<steps;l++)
        {
            if(arr[l]=='@')
            {
                no_of_coin+=1;
            }
        }
        cout<<no_of_coin<<'\n';
    }
}