# include <bits/stdc++.h>
using namespace std;
// Wrong answer wrong coefficient format
vector<int> toBinary(long int number) {
    vector <int> binary;
    if (number == 0) {
        binary.push_back(0);
        return binary;
        }
    
    while (number > 0) {
        int ans = number%2;
        binary.push_back(ans);
        number /= 2;
    }
    
    return binary;
}
int main()
{
    int test;
    cin>>test;
    for(int i =0; i<test; i++)
    {
        long int num;
        cin>>num;
        vector <int> answer = toBinary(num);
        cout<<answer.size()<<'\n';
        for(int i = answer.size()-1; i>=0; i--)
        {
            cout<<answer[i]<<' ';
        }
        cout<<endl;

        


    }
}