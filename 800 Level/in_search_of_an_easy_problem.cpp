# include <bits/stdc++.h>
using namespace std;
//Solved
int main()
{
    int a;
    cin>>a;
    int count =0;
    int arr;
    for(int i =0 ; i<a; i++)
    {
        cin>>arr;
        if(arr==1)
        {
            count+=1;
        }
    }
    if(count==0)
    {
        cout<<"EASY";
    }
    else{
        cout<<"HARD";
    }
    
    

}