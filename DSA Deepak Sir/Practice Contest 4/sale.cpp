# include <bits/stdc++.h>
using namespace std;
// Wrong answer on test case 3

int main()
{
    int a,b;
    cin>>a>>b;
    vector <int> arr(a);
    for(int i = 0; i<a; i++)
    {
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    int sum = 0;
    if(b<=a){
        for(int j = 0; j<b;j++)
        {
            sum+=arr[j];
        }
    }
    if(sum>=0)
    {

        cout<<sum;
    }
    else{
        cout<<-1*sum;
    }
    
}