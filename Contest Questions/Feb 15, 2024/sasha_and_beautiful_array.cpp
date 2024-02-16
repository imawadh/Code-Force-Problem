# include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i = 0; i<t ; i++)
    {
        int a;
        cin>>a;
        int b[a];
        for(int j = 0 ; j<a ; j++)
        {
            cin>>b[j];
        }
        int min = b[0];
        int max = b[0];
        for(int k = 1 ; k<a ; k++)
        {
            if(b[k]<min)
            {
                min = b[k];
            }
            if (b[k]>max)
            {
                max = b[k];
            }
        }
        cout<<max-min<<'\n';
    }
}