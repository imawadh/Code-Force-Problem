# include <bits/stdc++.h>
using namespace std;
// solved 
int main()
{
    int num;
    cin>>num;
    vector <int> v(7);
    for(int i =0; i<7; i++)
    {
        cin>>v[i];
    }
    int idx = 0;
    int sum = 0;
    int count = 0;
    while(sum<num)
    {
        if(idx == 7)
        {
            idx = 0;
        }
        sum+=v[idx++];
        count++;
    }
    if(count%7==0)
    {
        cout<<7;
        return 0;
    }
    cout<<count%7;
    
}