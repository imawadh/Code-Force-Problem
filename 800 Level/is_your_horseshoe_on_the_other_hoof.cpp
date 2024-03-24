# include <bits/stdc++.h>
using namespace std;
// Solved 
int main()
{
    set <int> shoes;
    for(int i =0 ; i<4; i++)
    {
        int a;
        cin>>a;
        shoes.insert(a);
    }
    cout<<4-shoes.size();
}