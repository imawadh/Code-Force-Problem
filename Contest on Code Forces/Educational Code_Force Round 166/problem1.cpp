// Verify Test
# include <iostream>
using namespace std;
// solved
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int num;
        cin>>num;
        string str;
        cin>>str;
        bool  flag = true;
        for(int i = 1; i<str.size(); i++)
        {
            if(str[i-1]>str[i])
            {
                cout<<"NO\n";
                flag = false;
                break;
            }
        }
        if(flag==true)
        {
            cout<<"YES\n";
        }
    }
}