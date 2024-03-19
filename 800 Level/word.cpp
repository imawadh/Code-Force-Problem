# include <bits/stdc++.h>
using namespace std;
// Solved
int main()
{
    string str;
    cin>>str;
    int count_lower = 0, count_upper = 0;
    for(int i = 0; i<str.size(); i++)
    {
        if(int(str[i])>94){
            count_lower+=1;
        }
        else{
            count_upper+=1;
        }
    }
    // cout<<count_lower<<'\n'<<count_upper;
    if(count_lower>=count_upper){
        for(int i = 0; i<str.size(); i++)
        {
            if(int(str[i])<95){
                str[i]=char(int(str[i])+32);
            }
        }
    }
    else{
        for(int i = 0; i<str.size(); i++)
        {
            if(int(str[i])>=95){
                str[i]=char(int(str[i])-32);
            }
        }
    }
    cout<<str;
    

}