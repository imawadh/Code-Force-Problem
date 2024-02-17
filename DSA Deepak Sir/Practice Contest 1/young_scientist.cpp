# include <iostream>
using namespace std;
int main()
{   
    int x,y,z,sum_x=0,sum_y=0,sum_z=0;
    int n ;
    cin>>n;
    if(n>0 && n<101)
    {   
    for (int i = 0 ; i<n ; i++){
        cin>>x;
        {
              if(x<=-101 || x>=101)
              return 0;
        }
        cin>>y;
        {
              if(y<=-101 || y>=101)
              return 0;
        }
        cin>>z;
        {
              if(z<=-101 || z>=101)
              return 0;
        }
        sum_x = sum_x + x;
        sum_y = sum_y + y;
        sum_z = sum_z + z;
    }
    if (sum_x == 0 && sum_y == 0 && sum_z == 0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    }
    return 0;
 
}