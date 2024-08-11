# include <bits/stdc++.h>
using namespace std;
bool check(vector <int> &v)
{
    for (int i =1; i<v.size() ; i++){
        if(v[i]>v[i-1]){
            return false;
        }
    }
    return true;
}
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
        int count = 0;
        bool found = check(v);
        if(found){
            cout<<count<<'\n';
        }
        while(found==false){
            int count1=0;
            int max = v[0];
            count+=1;
            for (int i =0; i<size ; i++){

                if(v[i] >= max){
                    max = v[i];
                }
                else{
                    v[i]+=1;
                    count1++;
                }
            }
            found = check(v);
            count += count1;

        }
        cout<<count<<'\n';



    }
}