# include <bits/stdc++.h>
using namespace std;
// solved 
int main()
{
    long long int num;
    cin>>num;
    vector <int> arr(19);
    int index = 0;
    while (num!=0){
        int digit = num%10;
        arr[index]=digit;
        index++;
        num/=10;
    }
    long long int answer = 0;
    for(int i =18 ;i>=index; i--)
    {
        arr.pop_back();
    }
    for(int i = arr.size()-1; i>=0 ; i--)
    {
        if(i== arr.size()-1 && arr[i] == 9)
        {
            answer*=10;
            answer+=9;
        }
        else{
            int dif = 9 - arr[i];
            // if(i==0 && answer==0)
            // {
            //     answer*=10;
            //     answer+=arr[0];
            // }
            if(dif<arr[i])
            {
                answer*=10;
                answer+=dif;
            }
            else{
                answer*=10;
                answer+=arr[i];
            }
        }
        
    }
    cout<<answer;
}