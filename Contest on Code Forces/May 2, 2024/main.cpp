// Solved

# include <bits/stdc++.h>
using namespace std;

bool isPrime(int number) {
    if (number <= 1) {
        return false;
    }
    for (int i = 2; i * i <= number; ++i) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}
int main()
{
    int test;
    cin>>test;
    for(int i =0; i<test ; i++ )
    {
        int num;
        cin>>num;
        bool prime = isPrime(num);
        if(prime==true)
        {
            cout<<num-1<<endl;
        }
        else{
            // find all the factors of num 
            int start = 2;
            while(start<=num/2)
            {
                if(num%start==0)
                {
                    cout<<num-start<<endl;
                    break;
                }
                start++;
            }
        }
        

    }
}