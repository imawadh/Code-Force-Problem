# include <bits/stdc++.h>
using namespace std;
// Solved
int main()
{
    int a;
    cin>>a;
    string str;
    cin>>str;
    set <char> my_set;
    for(int i= 0;i<str.size();i++)
    {
        char str1 = tolower(char(str[i]));
        my_set.insert(str1);
    }
    if(my_set.size()==26)
    {
    cout<<"YES\n";
    }
    else cout<<"NO\n";
}
