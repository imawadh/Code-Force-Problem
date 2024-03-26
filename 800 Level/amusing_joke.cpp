# include <bits/stdc++.h>
using namespace std;
//Not solved
int main()
{
    string str1, str2, str3;
    cin>>str1>>str2>>str3;
    if(str1.size() + str2.size() == str3.size())
    {
        for(int i = 0; i< str1.size(); i++)
        {
            size_t found = str3.find(str1[i]);
            str3.erase(found,1);
        }
        for(int i = 0; i< str2.size(); i++)
        {
            size_t found = str3.find(str2[i]);
            str3.erase(found,1);
        }
    }
    else{
        cout<<"NO";
    }

}