# include <bits/stdc++.h>
using namespace std;
// not solved
int main(){
    int test;
    cin>>test;
    while(test--){
        int size,k;
        cin >>size>>k;
        vector <int> v(size);
        int min = 6;
        for (int i =0; i<size ; i++){
            cin>>v[i];
            if(v[i]%k==0)
            {
                min = 0;
            }
            else if((k-(v[i]%k))<min)
            {
                min = k-(v[i]%k);
            }
        }
        cout<<min<<'\n';

    }
}