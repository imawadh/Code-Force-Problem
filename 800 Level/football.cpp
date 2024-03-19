# include <bits/stdc++.h>
using namespace std;
// Solved
int main()
{
    string str;
    cin>>str;
    int count = 1;
    int flag = 0;
    for(int i = 1; i<str.size(); i++)
    {
        if(str[i]==str[i-1])
        {
            count++;
            if(count==7)
            {
                flag = 1;
            }
        }
        else{
            count = 1;
        }
        if(flag == 1)
        {
            break;
        }
    }
    if(flag == 1)
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

}