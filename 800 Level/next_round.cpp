# include <iostream>
using namespace std;
int main()
{
    int a , b;
    cin>>a>>b;
    int c[a];
    for (int i = 0 ; i<a ; i++)
    {
        cin>>c[i];
    }
    int count = 0, max = c[b-1];
    for (int j = 0 ; j<a ; j++)
    {
        
        if(c[j]==0)
        {
            break;
        }
        else if(max <= c[j])
        {
            count++;
        }
        
        else 
        {
            break;
        }
    }
    cout<<count;
}