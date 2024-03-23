# include <bits/stdc++.h>
using namespace std;
// Solved
int main()
{
    int a,b,c;
    cin>>a;
    int count = 0;
    for(int i= 0; i<a; i++)
    {
        cin>>b>>c;
        if(c-b>=2)
        {
            count++;
        }
    }    
    cout<<count;

}