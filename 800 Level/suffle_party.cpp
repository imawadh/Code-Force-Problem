# include <bits/stdc++.h>
using namespace std;
// Solved
int main()
{
    int a;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        int b;
        cin>>b;
        // Solved
        
        /*
        suppose kare 1 pe tha 2 pe jayega 
        2 pe tha 4 pe ja sakta hai 
        4 ke baad 8 pe jayega
        8 ke baad 16 pe hi jayega 
        yani ki 2 to the power n tak jayega lekin n ka pata nhi aur wo 2 to the power n+1 pe bada ho jayega  

        */
       int value = 2;
       while(value <=b)
       {
         value*=2;
       }
       cout<<value/2<<'\n';
       
      
       



    }
}