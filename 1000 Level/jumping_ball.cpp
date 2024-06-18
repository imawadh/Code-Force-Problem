# include <bits/stdc++.h>
using namespace std;
// Solved 
int main()
{
    long n;
    cin>>n;
    string str;
    cin>>str;
    long ans=0;
    for(int i = 0;i<n; i++ )
    {
        if(str[i]=='<')
        {
            ans++;
        }
        else{
            break;
        }
    }
    for(int j = n-1; j>=0; j--)
    {
        if(str[j]=='>')
        {
            ans++;
        }
        else{
            break;
        }
    }
    cout<<ans;

}