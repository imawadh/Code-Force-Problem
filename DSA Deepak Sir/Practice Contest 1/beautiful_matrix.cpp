# include <iostream>
# include <cmath>
using namespace std;
int main()
{
    int arr[5][5];
    for(int i = 0; i<5; i++)
    {
        for(int j = 0; j<5 ;j++)
        {
            cin>>arr[i][j];
        }
    }  
    int index_x=0, index_y=0;
    for(int i = 0; i<5; i++)
    {
        for(int j = 0; j<5 ;j++)
        {
            if(arr[i][j]==1)
            {
                index_x=i;
                index_y=j;
                break;
            }
        }
    }
    index_x=2-index_x;
    index_y=2-index_y;
    cout<<abs(index_x)+abs(index_y);
}