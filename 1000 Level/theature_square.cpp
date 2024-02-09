/*
Not fully solved


*/



# include <iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c;
    a = a+(a%c);
    b = b+(b%c);
    if((a*b)>=(c*c))
    {
    cout<<(a*b)/(c*c);
    }
    else{
        cout<<1;
    }
    
}