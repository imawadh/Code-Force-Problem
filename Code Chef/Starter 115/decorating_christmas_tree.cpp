#include <bits/stdc++.h>
using namespace std;
// Solved 
int main() {
	int t;
    cin>>t;
    for(int i = 0; i<t ;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        c = c/3; // isse ye pata chala ki kitne ped par 3 ye aur 1 bada wala laga sakte hai 
        if(b>c)
        {
            b = b-c;
            b = b/2 + c; // total no. of kitne ped pe lag gaye 
        }
        
        if(b>=a) // agar lagne wale pedo ki sakhya barabar ya jyada ho gayi to wo possible hai  
        {
            cout<<"Yes\n";
        }
        else
        {
            cout<<"No\n";
        }
       
    }   

    
    
	

}
