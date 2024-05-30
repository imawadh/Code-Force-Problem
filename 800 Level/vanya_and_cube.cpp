# include <bits/stdc++.h>
using namespace std;
// Done

int main()
{
    int num;
    cin>>num;
    int sum =0;
    int next = 1;
    int count = 1;
    while(sum+next<=num)
    {
        sum += next;

        next = ((count+1)*(count+2))/2;
        count++;

    }
    cout<<--count<<'\n';
    
}