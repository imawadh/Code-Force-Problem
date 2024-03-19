# include <bits/stdc++.h>
using namespace std;
// Not Solved 

int main()
{
    int t;
    cin>>t;
    int a, b , c;
    for(int i =0 ; i<t ; i++)
    {
        cin>>a>>b>>c;
        int total = a;
        if(b==0){
            cout<<a+(b+c)/3+(b+c)%3<<'\n';
        }
        else{
            if((b+c)%3==0){
                cout<<a+(b+c)/3<<'\n';
            }

            else if((b+c)%3!=0 && c<2){
                cout<<-1<<'\n';
            }
            else{
                cout<<a+(b+c)/3+1<<'\n';
            }
        }
    }

}