# include <bits/stdc++.h>
using namespace std;
// solved 
int main(){
    int test;
    cin>>test;
    while(test--){
        int size;
        cin >>size;
        vector <int> v(size);
        vector <int> v1(size);
        for (int i =0; i<size ; i++){
            cin>>v[i];
        }
        for (int i =0; i<size ; i++){
            cin>>v1[i];
        }
        bool flag = true;
        for (int i =0; i<size ; i++){
            if(v[i]!=v1[i])
            {
                flag = false;
                break;
            }
        }
        if(flag)
        {
            cout<<"Bob\n";
            continue;
        }
        flag =true;
        for (int i =0,j=size-1; i<size,j>=0 ; i++,j--){
            if(v[i]!=v1[j])
            {
                flag = 0;
                break;
            }
        }
        if(flag)
        {
            cout<<"Bob\n";
            continue;
        }
        else{
            cout<<"Alice\n";
        }
    }
}