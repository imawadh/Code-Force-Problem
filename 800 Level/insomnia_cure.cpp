#include <bits/stdc++.h>
using namespace std;
// Solved
int main()
{
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    int i = 1;
    set <int> my_set;
    while(i*k<=d){
        my_set.insert(i*k);
        i++;
    }   
    i = 1;
    while(i*l<=d){
        my_set.insert(i*l);
        i++;
    }  
    i = 1;
    while(i*m<=d){
        my_set.insert(i*m);
        i++;
    } 
    i = 1;
    while(i*n<=d){
        my_set.insert(i*n);
        i++;
    } 
    cout<<my_set.size();

}