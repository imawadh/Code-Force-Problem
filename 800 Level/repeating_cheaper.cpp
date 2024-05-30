# include <bits/stdc++.h>
using namespace std;
// solved 
int main()
{
    int num; 
    cin>>num;
    string str;
    cin>>str;
    num = 1;
    for(int i = 0; i<str.size(); i+=num)
    {
        cout<<str[i];
        num+=1;
    }

}