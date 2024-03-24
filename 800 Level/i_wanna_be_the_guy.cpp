# include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int b;
    cin>>b;
    set <int> my_set;
    for(int i = 0; i<b ;i++)
    {
        int d;
        cin>>d;
        my_set.insert(d);

    }   
    int c;
    cin>>c;
    for(int i = 0; i<c ;i++)
    {
        int d;
        cin>>d;
        my_set.insert(d);
    }   
    if(my_set.size()==a)
    {
        cout<<"I become the guy.";
    }
    else{
        cout<<"Oh, my keyboard!";
    }
}