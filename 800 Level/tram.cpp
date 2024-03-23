# include <bits/stdc++.h>
using namespace std;
// Solved 
int main()
{
    int t,a,b,max = 0 , total = 0;
    cin>>t;
    for(int i = 0; i< t; i++)
    {
        cin>>a>>b;
        total = total+b-a;
        if(max<total)
        {
            max = total;
        }
    }
    cout<<max;
    

}