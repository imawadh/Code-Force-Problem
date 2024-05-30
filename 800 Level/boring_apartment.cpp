# include <bits/stdc++.h>
using namespace std;
// Done
int main()
{
    int num;
    cin>>num;
    for(int i = 0; i<num; i++)
    {
        int val;
        cin>>val;
        int answer = (val%10 - 1)*10;
        int count = 1;
        while(val!=0)
        {
            int digit = val%10;
            answer+=count;
            count++;
            val/=10;

        }
        cout<<answer<<'\n';
    }
    
}