# include <bits/stdc++.h>
using namespace std;
// Solved
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    c = a * ((c*(c+1))/2);
    c = c-b;
    if(c>0){
        cout<<abs(c);
    }
    else{
        cout<<0;
    }


}