# include <iostream>
# include <string>
using namespace std;
int main()
{
    int t,b;
    string a;
    cin>>t;
    for (int i =0 ; i<t; i++)
    {
    cin>>a;
    b = a.size();
    if(b>10)
    {
        cout<<a[0]<<b-2<<a[b-1]<<'\n';
    }
    else
    {
        cout<<a<<'\n';
    }
    }
}