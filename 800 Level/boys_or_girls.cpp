# include <bits/stdc++.h>
using namespace std;
// Solved
int main()
{
    string str;
    cin>>str;
    set <char> set_of_char;
    for(int i =0 ; i< str.size(); i++)
    {
        set_of_char.insert(str[i]);   
    }
    int size = set_of_char.size();
    if(size%2==1){
        cout<<"IGNORE HIM!";
    }
    else{
        cout<< "CHAT WITH HER!";
    }

}