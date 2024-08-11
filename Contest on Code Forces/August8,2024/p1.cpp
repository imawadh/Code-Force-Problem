# include <bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        long long a,b,c;
        cin>>a>>b>>c;
        long long x_sum = 0;
        long long y_sum = 0;
        for(int i =1; i<=c; i++)
        {
            if(i==c)
            {
                cout<<c*a-x_sum<<' '<<c*b-y_sum<<'\n';
            }
            else{
                cout<<-1*i<<' '<<-1*i<<'\n';
                x_sum+=(i*-1);
                y_sum+=(i*1);
            }
        }
    }
}