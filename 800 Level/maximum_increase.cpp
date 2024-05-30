# include <bits/stdc++.h>
using namespace std;
// Solved 
int main()
{
    int num;
    cin>>num;
    vector <int> v(num);
    for(int i = 0; i<num; i++)
    {
        cin>>v[i];
    }
    // for(int i = 0; i<num; i++)
    // {
    //     cout<<v[i]<<' ';
    // }
    int max = 1;
    int count = 1;
    for(int i = 1; i<v.size(); i++)
    {
        if(v[i]>v[i-1])
        {
            count++;
        }
        else{
            count = 1;
        }
        if(max<count)
        {
            max = count;
        }
    }
    if(max<count)
    {
            max = count;
    }
    cout<<max<<'\n';

}