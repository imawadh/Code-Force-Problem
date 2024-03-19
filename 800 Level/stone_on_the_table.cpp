# include <bits/stdc++.h>
using namespace std;
// Solved

int main()
{
    int a;
    cin>>a;
    string str;
    cin>>str;
    int count = 0;
    for(int i =1 ; i<a; i++){
        if(str[i]==str[i-1]){
            count+=1;
        }

    }
    cout<<count<<'\n';
    

}