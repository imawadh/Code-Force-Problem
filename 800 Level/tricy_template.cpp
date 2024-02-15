// Not solved yet


# include <iostream>
# include <string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i = 0 ; i<t ; i++)
    {
    int n;
    cin>>n;
    string a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    int flag = 0;
    for(int j = 0 ; j<n ; j++)
    {
        if(a[j]==b[j] || b[j]==c[j] || a[j]==c[j])
        {
            flag = 1;
            break;
        }
    }
    if(flag == 0)
    {
        cout<<"Yes\n";
    }
    else
    {
        cout<<"No\n";
    }
    

    
    }
}