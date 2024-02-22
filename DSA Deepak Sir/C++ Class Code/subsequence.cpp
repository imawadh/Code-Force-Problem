# include <bits/stdc++.h>
using namespace std;
// Not Fully correct 
// Problem is thid that agar pahla character mila jaye to second charcter ko phir se start se dekhega aur ordering change ho sakta hai.  --- dono ka bas yahi antar aayega.


int main()
{
    string str;
    cin>>str;
    string subsequence;
    cin>>subsequence;
    int flag = 0;
    for (int i = 0; i<subsequence.length(); i++)
    {
        for(int j = 0; j<str.length();)
        {
            if(subsequence[i]==str[j])
            {
                flag = 1;
                str[j]='*';
                j+=j;
                break;
            }
            else
            {
                j++;
            }
        }
        if(flag == 0)
        {
            break;
        }

    }
    if(flag == 0)
        {
            cout<<"No\n";
        }
    else
    {
        cout<<"Yes\n";
    }
}