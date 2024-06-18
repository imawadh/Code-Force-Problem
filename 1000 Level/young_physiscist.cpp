# include <bits/stdc++.h>
using namespace std;
//Solved 
int main()
{
    int num;
    cin>>num;
    vector <int> v(3,0);
    while(num--)
    {
    for(int i =0 ; i<3; i++)
    {
        int value;
        cin>>value;
        v[i]+=value;
    }
    }
    for(int i =0 ; i<3; i++)
    {
        if(v[i]!=0)
        {
            cout<<"NO\n";
            return 0;
        }
    }
    cout<<"YES\n";
    

    
}