# include <iostream>
//Solved

using namespace std;
int main()
{
    int t; cin>>t;
    int a,b,c;
    for(int i =0 ;i<t ; i++)
    {
        cin>>a>>b>>c;
        if(a==b && b!=c)
        {
            cout<<c<<'\n';
        }
        else if(b==c && a!=b)
        {
            cout<<a<<'\n';
        }
        else{
            cout<<b<<'\n';
        }
    }
}