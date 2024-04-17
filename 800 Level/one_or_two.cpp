// solved 
# include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    for (int i = 0; i<test; i++)
    {
        int num;
        cin>>num;
        vector <int> arr(num);
        int count2 = 0;
        
        for (int j = 0; j<num; j++)
        {
            cin>>arr[j];
            if(arr[j]==2)
            {
                count2+=1;
            }
           
        }
        if(count2==0)
        {
            cout<<1<<'\n';
        }
        else if(count2%2==1)
        {
            cout<<-1<<'\n';
        }
        else{
            int match = 0;
            int i = 0;
            while(match!=count2/2)
            {
                if(arr[i]==2)
                {
                    match+=1;
                }
                i+=1;
            }
            cout<<i<<'\n';
        }
    }
}