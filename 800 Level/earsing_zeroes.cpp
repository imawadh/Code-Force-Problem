# include <iostream>
# include<string.h>
using namespace std;
// Solved 
int main()
{
    int test;
    cin>>test;
    for(int i = 0; i<test; i++)
    {
        string str;
        cin>>str;
        int index_start = 0;
        int index_end = 0;
        int count = 0;
        
        for(int j = 0; j<str.size(); j++)
        {
            
            if( str[j]=='1')
            {
                index_start = j;
                break;
            }
        }
       

        for(int j = str.size()-1; j>=0; j--)
        {
            if(str[j]=='1')
            {
                index_end=j;
                break;
                
            }
        }
        if(index_start == index_end)
        {
            cout<<count<<'\n';
        }
        else{
        for(int j = index_start; j<=index_end; j++)
        {
            if(str[j]=='0')
            {
                ++count;
            }
        }
        cout<<count<<'\n';
        }
    
        
        

    }


}