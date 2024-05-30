# include <bits/stdc++.h>
using namespace std;
// solved 

int main()
{
    int test;
    cin>>test;
    for(int i=0;i<test; i++)
    {
        int a,b,n;
        cin>>a>>b>>n;
        int count1 = 0,count2=0;
        int c = a,d=b;
        while(c<=n && d<=n)
        {
            d+=c;
            count2+=1;
            if(d<=n)
            {
                c+=d;
                count2+=1;
            }
        }

        
        
        while (a<=n && b<=n)
        {
            a+=b;
            count1++;
            if(a<=n){
            b+=a;
            count1++;
            }
            
        }
        
        if(count1<count2) cout<<count1<<'\n';
        else cout<<count2<<'\n';
    }
}