# include <bits/stdc++.h> 
using namespace std;
// Solved 
int main()
{
    int row,col; 
    cin>>row>>col;
    for(int i = 0; i<row; i++)
    {
        for(int j = 0; j<col; j++)
        {
            cout<<'#';
        }
        cout<<endl;
        i++;
        if(i!=row)
        {
            for(int j = 0;j<col; j++)
            {
                if(j != col-1)
                {
                    cout<<'.';
                }
                else{
                    cout<<'#';
                }
            }
            cout<<endl;
        }
        else{
            break;
        }
        i++;
        if(i!=row)
        {
            for(int j = 0; j<col; j++)
            {
                cout<<'#';
            }
            cout<<endl;
        }
        else{
            break;
        }
        i++;
        if(i!=row)
        {
            for(int j = 0;j<col; j++)
            {
                if(j !=0)
                {
                    cout<<'.';
                }
                else{
                    cout<<'#';
                }
            }
            cout<<endl;
        }
    }
}