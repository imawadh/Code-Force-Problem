# include <iostream>
using namespace std;
// Solved

int main()
{
    int t;
    cin>>t;
    for(int i = 0; i<t; i++)
    {
        int a;
        cin>>a;
        char arr[a][a];
        for (int j = 0; j<a ;j++)
        {
            for(int k = 0; k<a; k++)
            {
                cin>>arr[j][k];
            }
        }
        int count = 0;
        for (int l = 0; l<a; l++)
        {
            count =0;
            for(int m = 0 ; m<a ; m++)
            {
                if(arr[l][m]=='1')
                {
                    count++;
                }
            }
            if(count==1)
            {
                break;
            }
        }

        if(count == 1)
        {
            cout<<"TRIANGLE\n";
        }
        else{
            cout<<"SQUARE\n";
        }
    }
}