# include <bits/stdc++.h>
using namespace std;
// Solved 
int main()
{
    vector<vector <int> >arr(5,vector<int>(5));

    // Correct way of initialising vector within vector of size(5)(5) ..... 


    int index_x = 0;
    int index_y = 0;
    for(int i = 0; i<5; i++)
    {
        for(int j = 0; j<5; j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]==1)
            {
                index_x=i;
                index_y=j;
            }
        }
    }
    cout<<abs(2-index_x)+abs(2-index_y);
}