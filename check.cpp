#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
# include <string>
using namespace std;


int main() {
    string str;
    cin>>str;
    long long int count = 0;
    for (int i = 0; i<str.size(); i++)
    {
        if(str[i]=='A' |Y str[i]=='H' || str[i]=='I' || str[i]=='M' || str[i]=='O' || str[i]=='T' || str[i]=='U' || str[i]=='V' || str[i]=='W' || str[i]=='X' || str[i]=='Y')
        {
            count++;
        }
    }
    cout<<count;
    
      
    
    
    return 0;
}
