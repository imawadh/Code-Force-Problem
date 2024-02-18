# include <iostream>
//Solved
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i =0 ;i<t ; i++)
    {
        int count_A = 0,count_B = 0,count_C = 0;
        char str[3][3];
        for(int j = 0;j<3 ;j++)
        {
            for(int k =0 ;k<3 ; k++)
            {
                cin>>str[j][k];
                if(str[j][k]=='A')
                {
                    count_A++;
                }
                else if(str[j][k]=='B')
                {
                    count_B++;
                }
                else if(str[j][k]=='C')
                {
                    count_C++;
                }
            }
        }
        if(count_A!=3)
        {
            cout<<'A'<<'\n';
        }
        else if(count_B!=3)
        {
            cout<<'B'<<'\n';
        }
        else{
            cout<<'C'<<'\n';
        }
    }
}