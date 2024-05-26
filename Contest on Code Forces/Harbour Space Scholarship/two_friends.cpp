# include <bits/stdc++.h>
using namespace std;
// Solved 
int main()
{
    int test;
    cin>>test;
    for(int i=0; i<test; i++)
    {
        int num;
        cin>>num;
        vector <int> arr(num);
        for(int j = 0; j<num; j++)
        {
            cin>>arr[j];
        }
        bool answer = false;
        for(int j = 0; j<num; j++)
        {
            int temp = arr[j];
            if(arr[temp-1]==j+1)
            {
                answer = true;
                break;
            }
        }
        if(answer==true) cout<<2<<'\n';
        else cout<<3<<'\n';
    }
}