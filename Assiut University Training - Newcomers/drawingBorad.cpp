# include <bits/stdc++.h>
using namespace std;
 

 
// Typedef
typedef long long  ll;
 
void awadh_solution(){
    int n,m,q;
    cin>>n>>m>>q;
    vector<vector<char>> mat(n,vector<char>(m,'.'));
    while(q--){
        int r1,c1,r2,c2;
        char c;
        cin>>r1>>c1>>r2>>c2>>c;
        r1-=1;
        c1-=1;
        r2-=1;
        c2-=1;
        for(int i = min(r1,r2); i<=max(r1,r2); i++){
            for(int j=min(c1,c2); j<=max(c1,c2); j++){
                mat[i][j]=c;
            }
        }
    }
    for(int i =0; i<n; i++){
        for(int j =0; j<m; j++){
            cout<<mat[i][j];
        }
        cout<<'\n';
    }
    return;
 
}
 
int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int test=1;
    while(test--){
       awadh_solution();
    }
}