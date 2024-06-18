# include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int rows, cols;
        cin >> rows;
        cin >> cols;
        vector<vector<char>> matrix(rows, vector<char>(cols));
        int max = 0;
        int row = 0;
        for (int i = 0; i < rows; ++i) 
        {
            int count = 0;
            for (int j = 0; j < cols; ++j) 
            {
                cin >> matrix[i][j];
                if(matrix[i][j]=='#')
                {
                    count++;
                }
            }
            if(count>max)
            {
                max=count;
                row = i;
            }
        }
        int count = 0;
        for(int i=0; i<cols; i++)
        {
            if(matrix[row][i]=='#')
            {
                count++;
            }
            if(count>=(max+1)/2) 
            {
                cout<<row+1<<' '<<i+1<<'\n';
                break;
            }    
        }
        // for (int i = 0; i < rows; ++i) 
        // {
            
        //     for (int j = 0; j < cols; ++j) 
        //     {
        //         cout<< matrix[i][j];
        //     }
        //     cout<<'\n';
        // }
    }
}