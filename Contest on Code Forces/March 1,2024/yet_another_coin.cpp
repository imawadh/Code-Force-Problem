# include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i = 0; i<t ; i++)
    {
        int a ;
        cin>>a;
        int fifteen_number_coin = a/15;
        a = a-15*fifteen_number_coin;
        int ten_number_coin = a/10;
        a = a-10*ten_number_coin;
        int six_number_coin = a/6;
        a = a- 6*six_number_coin;
        int three_number_coin = a/3;
        a = a-a*three_number_coin;
        cout<<fifteen_number_coin+ten_number_coin+six_number_coin+three_number_coin+a<<'\n';
    }
}