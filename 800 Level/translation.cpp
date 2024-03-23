# include <bits/stdc++.h>
using namespace std;
// Solved
int main()
{
    string str1,str2;
    cin>>str1;
    cin>>str2;
    for(int i = 0 , j = str2.size()-1; i<str1.size(), j>=0; i++,j--)
    {
        if(str1[i]!=str2[j])
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";


}