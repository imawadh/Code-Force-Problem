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
        int max = v[0];
        for(int i =0; i<size-1; i++)
        {
            if((v[i+1]-v[i])>max)
            {
                max = v[i+1]-v[i];
            }
        }
      
        if(2*(k-v[size-1])>max)
        {
            max = 2*(k-v[size-1]);
        }
        cout<<max<<'\n';
        
    }
}