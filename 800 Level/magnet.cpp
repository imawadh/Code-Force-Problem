# include <bits/stdc++.h>
using namespace std;
// Solved 
int main()
{
    int c;
    cin>>c;
    string str1;
    char a, b;
    int count =1;
    for(int i =0 ; i<c ; i++)
    {
        b = str1[0];
        cin>>str1;
        a = str1[1];
        if(a==b)
        {
            count++;
        }


    }
    cout<<count;

}