# include <bits/stdc++.h>
using namespace std;
// Solved
int main()
{
    int a, b;
    cin>>a>>b;
    int c;
    while (b!=0)
    {
        c = a%10;
        
        if(c==0)
        {
            a/=10;
           
        }
        else{
            a-=1;
            
        }
        b-=1;
    }
    cout<<a;
}