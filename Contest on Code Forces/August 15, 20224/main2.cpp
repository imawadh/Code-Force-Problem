# include <bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
         int l,r,L,R;
         cin>>l>>r>>L>>R;
         if(l==L)
         {
            cout<<min(r,R)-l<<'\n';
         }
         else if(l<L)
         {
            if(r<L)
            {
                cout<<1<<'\n';
                continue;
            }
            cout<<min(r,R)-L+1<<'\n';
         }
         else{
            if(R<l)
            {
                cout<<1<<'\n';
            }
            else if(l==R)
            {
                cout<<2<<'\n';
            }
            else{
                cout<<min(l,R)-L+1<<'\n';
            }
         }
         
         
    }
        

    
}