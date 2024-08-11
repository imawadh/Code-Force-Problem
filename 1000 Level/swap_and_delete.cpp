# include <bits/stdc++.h>
using namespace std;
// solved 
void awadhkishorsingh241(string str){
    int ct0= 0; int ct1 =0;
    for( int i =0; i<str.size(); i++)
    {
        if(str[i]=='0')
        {
            ct0++;
            continue;
        }
        ct1++;
    }
    if(ct1==ct0)
    {
        cout<<0<<'\n';
        return ;
    }
    int i = 0;
    for( int i =0; i<str.size(); i++)
    {
        if(str[i]=='0')
        {
            ct1--;    
        }
        else{
            ct0--;
        }
        if(ct0==-1)
        {
            cout<<ct1<<'\n';
            return;
        }
        if(ct1==-1)
        {
            cout<<ct0<<'\n';
            return;
        }
    }
    cout<<1<<'\n';


}
int main(){
    int test;
    cin>>test;
    while(test--)
    {
        string str;
        cin>>str;
        awadhkishorsingh241(str);
    }
   
}