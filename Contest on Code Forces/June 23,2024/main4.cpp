
# include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int row,col;
        cin>>row>>col;
        vector <vector <int>> v(row,vector <int> (col)); 
        // Input
        for(int i =0; i<row; i++)
        {
            for(int j =0; j< col; j++)
            {
                cin>>v[i][j];
            }
        }
        // ! Changes to be made is to make max of neighbouring cells --- Accessing is creating problem 
        for(int i =0; i<row; i++)
        {
            for(int j =0; j< col; j++)
            {
                // v[i][j]=max of neighbours ;
                v[i][j]=max(v[i][j+1],max(v[i][j-1],max(v[i+1][j],v[i-1][j])));
            }
        }
        
        // Output 
        for(int i =0; i<row; i++)
        {
            for(int j =0; j< col; j++)
            {
                cout<<v[i][j]<<' ';
            }
            cout<<'\n';
        }
    }
}