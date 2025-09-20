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
        bool flag = false;
        for (int i =1; i<size ; i++){
            flag = 0;
            for(int j=0; j<i; j++)
            {
                if(abs(v[i]-v[j])==1)
                {
                    flag = true;
                    break;
                }
            }
            if(!flag )
            {
                cout<<"NO\n";
                break;
            }
        }
        if(flag == 1)
        {
            cout<<"YES\n";
        }

    }
}