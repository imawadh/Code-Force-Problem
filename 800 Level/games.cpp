# include <bits/stdc++.h>
using namespace std;
// Solved
int main()
{
    int num;
    cin>>num;
    vector <int> arr1(num);
    vector <int> arr2(num);
    for(int i = 0; i<num; i++)
    {
        cin>>arr1[i];
        cin>>arr2[i];
    }
    int count = 0;
    for(int i=0; i<num; i++)
    {
        for(int j =0 ;j<num ; j++)
        {
            if(arr1[i]==arr2[j]) count++;
        }
    }
    cout<<count;


}