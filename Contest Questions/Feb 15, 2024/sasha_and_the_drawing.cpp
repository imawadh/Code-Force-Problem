# include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i = 0 ; i<t ; i++)
    {
        int x,y;
        cin>>x>>y;
        int z = (4*x)-2;
        if(z==y)
        {
            cout<<(z/2)+1<<'\n';
        }
        else if(y%2 == 0)
        {
            cout<<y/2<<'\n';
        }
        else{
            cout<<(y/2)+1<<'\n';
        }
    }
}