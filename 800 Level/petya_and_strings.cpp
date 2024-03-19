# include <bits/stdc++.h>
using namespace std;
// Solved

int main()
{
    string str1,str2;
    cin>>str1;
    cin>>str2;
    int flag = 0;
    for(int i = 0 ; i<str1.size(); i++)
    {
        char a = tolower(str1[i]);
        char b = tolower(str2[i]);
        if(a == b )
        {
            flag == 0;
        }   
        else if (a>b){
            flag = 1;
            break;
        }
        else{
            flag = -1; 
            break;
        }
    }
    cout<<flag<<'\n';
}