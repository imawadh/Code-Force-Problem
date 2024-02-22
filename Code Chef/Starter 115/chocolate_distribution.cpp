#include <bits/stdc++.h>
using namespace std;

int main() {
	
    int t;
    cin>>t;
    for(int i = 0; i<t ; i++)
    {
        int a;
        cin>>a;
        (a%2 == 0) ? cout<<a/2<<' '<<a : cout<<a/2+1<<' '<<a;
        cout<<'\n';
    }
	

}
