# include <bits/stdc++.h>
using namespace std;
// Solved 
int main()
{
    int a;
    cin>>a;
    string str;
    cin>>str;
    int count_A =0 , count_D= 0;
    for(int i = 0 ; i< str.size(); i++)
    {
        if(str[i]=='A')
        {
            count_A+=1;
            continue;
        }
        count_D+=1;
    }
    if(count_A>count_D)
    {
        cout<<"Anton";
        return 0;
    }
    else if(count_A==count_D)
    {
        cout<<"Friendship";
        return 0;
    }
    cout<<"Danik";
    return 0;

}