# include <bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int size;
        cin >>size;
        vector <int> v(size);
        for (int i =0; i<size ; i++){
            cin>>v[i];
        }
        if(size>2)
        {
            cout<<"NO\n";
        }
        else{
            if(abs(v[0]-v[1])>=2)
            {
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }
        }
    }
}