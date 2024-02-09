# include <iostream>
# include <string>

using namespace std;
int main()
{   
    int t,x=0;
    cin>>t;
    string a;
    for (int i = 0 ; i<t ; i++)
    {
        cin>>a;
        if(a[0]=='+' || a[1]=='+')
        {
            x++;
        }
        else{
            x--;
        }

    }
    cout<<x;

}