#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        a = b-a;
        if(a>=0)
        {
            cout<<"Yes\n";
        }
        else{
            if(a*3<=c)
            {
                cout<<"Yes\n";
            }
            else{
                cout<<"No\n";
            }
        }

    }
    
	

}
