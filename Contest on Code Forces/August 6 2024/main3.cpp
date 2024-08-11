#include <bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--)
    {
        string str1;
        string str2;
        cin>>str1;
        cin>>str2;
        vector <int> v1(26,0);
        vector <int> v2(26,0);
        int ct=0;
        for(int i =0; i<str1.size();i++)
        {
            if(str1[i]>=97){
                v1[str1[i]-97]+=1;
            }
            if(str1[i]=='?')
            {
                ct++;
            }
        }
        for(int i =0; i<str2.size();i++)
        {
                v2[str2[i]-97]+=1;   
        }
        string str="a";
        for(int i =0; i<26; i++)
        {
            if(v2[i]>v1[i])
            {
                ct-=(v2[i]-v1[i]);
                while(v2[i]>v1[i])
                {
                    str+=char(str2[i]);
                    v2[i]--;
                }
            }
            
        }
        if(ct<0)
        {
            cout<<"NO";
        }
        else{
            cout<<"YES\n";
            int idx = 1;
            for(int i =0; i<str1.size();i++){
                if(idx<str.size())
                {
                    if(str1[i]=='?')
                    {
                        str1[i]=str[idx++];
                    }
                }
                if(str1[i]=='?')
                {
                    str1[i]='a';
                }
            
            }
            cout<<str1<<'\n';
        }
    }
}