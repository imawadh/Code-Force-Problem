# include <bits/stdc++.h>

using namespace std;
// Solved
int main()
{
    int a;
    cin>>a;
    vector <int> arr(a);
    int min = 1000, max = 0;
    int max_index = 0;
    int min_index = 0;

    for(int j = 0; j<a; j++)
    {
        cin>>arr[j];
        if(min>=arr[j])
        {
            min = arr[j];
            min_index=j;
        }
        if(max<arr[j])
        {
            max = arr[j];
            max_index=j;
        }





    }
    if(max_index<min_index)
    {
        cout<<max_index+arr.size()-min_index-1;
    }
    else{
        cout<<max_index+arr.size()-min_index-2;
    }
}
