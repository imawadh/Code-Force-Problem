# include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count = 0;
    vector <int> v;
    for(int i = 0; i<n ; i++)
    {
        cin>>v[i];
        if(v[i]%2)
        {
            count++;
        }
    }
    if(count>1)
    {
        for(int i = 0; i<n ; i++)
        {
            if(v[i]%2==0)
            {
                cout<<i+1;
                break;
            }
        }
    }
    else{
        for(int i = 0; i<n ; i++)
        {
            if(v[i]%2==1)
            {
                cout<<i+1;
                break;
            }
        }
    }
    

}