# include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        string str1;
        string str2;
        cin>>str1>>str2;
        swap(str1[0],str2[0]);
        cout<<str1<<' '<<str2<<'\n';
    }
}