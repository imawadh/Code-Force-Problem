# include <bits/stdc++.h>
using namespace std;
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;
 
void awadh_solution(){
    int n;
    cin>>n;
    vector<int> v(n);
    int mxIdx = 0;

    for(int i = 0; i<n; i++){
        cin>>v[i];
        if(v[i]==n){
            mxIdx=i;
        }
    }
    // Check left descending
    for(int i = mxIdx-1; i>=0; i--){
        if(v[i]>v[i+1]){
            cout<<"NO\n";
            return;
        }
    }
    // Checking Right Descending
    for(int i = mxIdx+1; i<n; i++){
        if(v[i]>v[i-1]){
            cout<<"NO\n";
            return;
        }
    }
    
    cout<<"YES\n";
 
}
 
int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int test;
    cin>>test;
    while(test--){
       awadh_solution();
    }
}