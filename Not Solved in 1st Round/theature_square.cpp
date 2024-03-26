# include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c;
    cin>>a>>b>>c;
    if(a%c!=0)
    {
    a = c - a%c + a;
    }
    if(b%c!=0)
    {
    b = c - b%c + b;
    }
    
    cout<<(a*b)/(c*c);
    
}