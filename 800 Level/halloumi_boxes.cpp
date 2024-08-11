# include <bits/stdc++.h>
using namespace std;
// solved
int main(){
    int test;
    cin>>test;
    while(test--){
        int size,k;
        cin >>size>>k;
        vector <int> v(size);
        for (int i =0; i<size ; i++){
            cin>>v[i];    
        }
        bool flag = true;
        if(k==1)
        {
            for (int i =0; i<size-1 ; i++){
                if(v[i]>v[i+1])
                {
                    flag= false;
                    cout<<"NO\n";
                    break;
                }
            }
            if(flag)
            {
                 cout<<"YES\n";
            }
        }
        else{
                cout<<"YES\n";   
        } 
    }
}