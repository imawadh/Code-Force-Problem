# include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i = 0; i<t; i++)
    {
        int a;
        cin>>a;
        char arr[a][a];
        for(int j =0 ;j<a;j++)
        {
            for(int k = 0; k<a; k++)
            {
                cin>>arr[j][k];
            }
        }
        int flag = 0;
        for(int j = 0 ; j<a; j++)
        {
            for(int k = 0; k<a; k++)
            {
                if(arr[j][k]=='1')
                {
                    if(arr[j+1][k]=='1')
                    {
                        if(arr[j+1][k-1]=='1')
                        {
                            flag = 2;
                            break;
                        }
                        
                        flag = 1;
                        break;
                    }
                    else
                    {
                        flag = 2;
                        break;
                    }
                }
                

            }
            if(flag == 1 || flag == 2)
                {
                    break;
                }
            
        }
        if(flag == 1)
        {
            cout<<"SQUARE\n";
        }
        else
        {
            cout<<"TRIANGLE\n";
        }
        
    }
}