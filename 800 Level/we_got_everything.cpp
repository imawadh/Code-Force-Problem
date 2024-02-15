# include <iostream>
using namespace std;
int main()
{
    int t,n,k;
    cin>>t;
    for(int i = 0 ; i<t ; i++)
    {
        cin>>n>>k;
        string str = "abcdefghijklmnopqrstuvwxyz";
        for(int j = 0; j<n ; j++)
        {
            for(int l = 0 ; l<k ; l++)
            {
                cout<<str[l];
            }
        }
        cout<<'\n';

    }
}