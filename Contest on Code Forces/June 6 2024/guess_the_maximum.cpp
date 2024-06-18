# include <bits/stdc++.h>
using namespace std;
// not solved 
int main()
{
    int test;
    cin>>test;
    for(int i =0; i<test; i++)
    {
        int num;
        cin>>num;
        vector <int> v(num);
        for(int j= 0; j<num; j++)
        {
            cin>>v[j];
        }
        int min = INT_MAX;
        for(int j= 0; j<num-1; j++)
        {
            int max_ = v[j];
            for(int k=j+1; k<num; k++)
            {
                if(v[k]>max_)
                {
                    max_=v[k];
                }
                if(max_<min)
                {
                    min=max_;
                }
                
            }
            
        }
        cout<<min-1<<'\n';
        
    }
}