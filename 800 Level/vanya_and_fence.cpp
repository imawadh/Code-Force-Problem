# include <bits/stdc++.h>
using namespace std;
// Solved
int main()
{
    int a , b;
    cin>>a>>b;
    int number;
    int count = 0;

    for(int i = 0 ; i<a ; i++)
    {
        cin>>number;
        if(number>b)
        {
            count++;
        }
    }
    
    cout<<a+count;

}