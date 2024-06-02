# include <bits/stdc++.h>
using namespace std;
// Solved 
int main()
{
    int num,day;
    cin>>num>>day;
    int sum=0;
    int count = 0;
    vector <int> arr(num);
    for(int i = 0; i<num; i++)
    {
        cin>>arr[i];
        

    }
    for(int i = 0; i<num; i++)
    {
        sum+=arr[i];
        if(sum>day){
            day = i-1;
        }
    }
}