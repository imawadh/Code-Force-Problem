# include <bits/stdc++.h>
using namespace std;
//Solved
int main()
{
    int a;
    cin>>a;
    vector <int> arr(a);
    for(int i =0 ; i<a ; i++)
    {
        cin>>arr[i];
    }

    int max = arr[0];
    int min = arr[0];
    int count = 0;
    for (int i =1 ;i<a ;i++)
    {
        if(max<arr[i])
        {
            max = arr[i];
            count++;
        }
        if(min>arr[i])
        {
            min=arr[i];
            count++;
        }
    }
    cout<<count;
}