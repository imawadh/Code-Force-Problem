# include <bits/stdc++.h>
using namespace std;
// Solved
int main()
{
    string str;
    cin>>str;
    string final_str;
    int count_1 = 0, count_2 = 0, count_3 = 0 ;

    for(int i = 0 ; i < str.size() ; i++)
    {
        if(str[i]=='1'){
            count_1++;
        }
        else if(str[i]=='2'){
            count_2++;
        }
        else if(str[i]=='3'){
            count_3++;
        }
        
    }
    while(count_1>0){
        final_str.push_back('1');
        final_str.push_back('+');
        count_1--;
    }
    while(count_2>0){
        final_str.push_back('2');
        final_str.push_back('+');
        count_2--;
    }
    while(count_3>0){
        final_str.push_back('3');
        final_str.push_back('+');
        count_3--;
    }
    final_str.pop_back();
    cout<<final_str<<endl;

}