# include <bits/stdc++.h>
using namespace std;
// solved 
int main()
{
    long long int num;
    // Since it is given in the question that the number can 10^15 sonecessary to take long long int 
    cin>>num;
    vector <int> arr(19);
    // 10^18 means 1 followed by 18 zeroes ----  i.e:  19 lenght is required 
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
    // Deleting the right zeroes of the number which where more than the actual number of digits in the problem 
    for(int i = arr.size()-1; i>=0 ; i--)
    {
        if(i== arr.size()-1 && arr[i] == 9)
        {
            answer*=10;
            answer+=9;
        }
        else{
            int dif = 9 - arr[i];
            
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