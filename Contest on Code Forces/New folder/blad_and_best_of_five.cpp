# include <iostream>
// Done

# include <string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i = 0 ;i<t ; i++)
    {
        char str[5];
        for(int j = 0; j<5 ;j++)
        {
            cin>>str[j];
        }
        int count_A = 0 ;
        int count_B = 0;
        for(int k = 0; k<5; k++)
        {
            if(str[k]=='A')
            {
                count_A+=1;
            }
            else
            {
                count_B+=1;
            }
        }
        if(count_A>count_B)
        {
            cout<<"A\n";
        }
        else
        {
            cout<<"B\n";
        }
    }
}