# include <bits/stdc++.h>
using namespace std;
// Solved 

int main()
{
    int test;
    cin>>test;
    for (int i=0;i<test; i++)
    {
        long long int a,b,c;
        cin>>a>>b>>c;
        long long int answer = 0;
        c+=1;
        if(c%a==0)
        {
            answer=answer+c/a;
        }
        else{
            answer=answer+c/a+1;
        }
        if(c%b==0)
        {
            answer=answer+c/b;
        }
        else{
            answer=answer+c/b+1;
        }
        cout<<answer<<'\n';
    }
}