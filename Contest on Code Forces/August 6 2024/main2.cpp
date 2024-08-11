# include <bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int ct=0;
        int a1,a2,a3,a4;
        cin>>a1>>a2>>a3>>a4;
        if(a1>a3 && a2>=a4 ||  a1>=a3 && a2>a4){
            ct+=2;
        }
        if(a1>=a4 && a2>a3 || a1>a4 && a2>=a3)
        {
            ct+=2;
        }
        cout<<ct<<'\n';
    }
}