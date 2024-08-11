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
        int mx = 0;
        for(int i =0; i<size; i++)
        {
            if(v[i]>=i+1 && v[i]>mx)
            {
                mx = v[i];
            }
        }
        if(mx==0)
        {
            cout<<"NO\n";
            continue;
        }
        int ct=0;
        for(int i =0; i<size; i++)
        {
            if(v[i]==mx && (v[i]>=i+1))ct++;
        }
        if(ct%2==0)
        {
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }
    }
}