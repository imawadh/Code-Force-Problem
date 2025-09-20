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
        string str;
        cin>>str;
        int fl = 0,lr = 0;
        for(int i = 0; i<size; i++)
        {
            if(str[i]=='L')
            {
                fl= i;
                break;
            }
        }
        for(int i = size-1; i>=0; i--)
        {
            if(str[i]=='R')
            {
                lr= i;
                break;
            }
        }
        int sum =0;
        if(fl<lr)
        {
        for(int i =fl; i<=lr;i++)
        {
            sum+=v[i];
        }
        }
        int sl =0, sr=0;
        for(int i = fl+1; i<lr; i++)
        {
            if(str[i]=='L')
            {
                sl= i;
                break;
            }
        }
        for(int i = lr-1; i>fl; i--)
        {
            if(str[i]=='R')
            {
                sr= i;
                break;
            }
        }   
        if(sl<sr)
        {
        for(int i =sl; i<=sr;i++)
        {
            sum+=v[i];
        }
        }
        cout<<sum<<'\n';    



    }
}