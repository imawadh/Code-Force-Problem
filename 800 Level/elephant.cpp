# include <bits/stdc++.h>
using namespace std;
//Solved
int main()
{
    int a;
    cin>>a;
    int b = 5, step =0;
    while(a!=0){
        int c = a/b;
        step+=c;
        a = a%b;
        b--;
    }
    cout<<step;
    

}