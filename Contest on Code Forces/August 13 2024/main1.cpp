# include <bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int num;
        cin>>num;
        if(num>=102 && num<=109)
        {
            cout<<"YES\n";
        }
        else if(num>=1010 && num<=1099){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }

    }
}