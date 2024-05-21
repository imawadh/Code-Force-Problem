# include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    for(int i =0; i<test; i++)
    {
        int val;
        cin>>val;
        string str;
        cin>>str;
        vector <int> arr(26);
        for (int j = 0; j<26; j++)
        {
            arr[j]=0;
        }
        for(int j = 0; j<str.size() ; j++)
        {
            int m = str[j];
            
            arr[m-97]+=1;
        }
        string answer;
        for(int j = 0; j<26; j++)
        {
            if(arr[j]>0){
                answer.push_back(static_cast<char>(j + 97));
            }
        }
        
        string final_answer = str;
        for (int j = 0,m = answer.size()-1; j<answer.size(),m>=0; j++,m--)
        {
            for(int k = 0;k<str.size(); k++)
            {
                if(str[k]==answer[j])
                {
                    final_answer[k]=answer[m];
                }
            }
        }
        cout<<final_answer<<'\n';

    }
}