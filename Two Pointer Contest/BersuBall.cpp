# include <iostream>
# include <vector>
# include <algorithm>
using namespace std;
int main()
{
    int boy,girl;
    cin>>boy;
    vector <int> vb ;
    while(boy--)
    {
        int a;
        cin>>a;
        vb.push_back(a);
    }
    cin>>girl;
    vector <int> vg;
    while(girl--)
    {
        int a;
        cin>>a;
        vg.push_back(a); 
    }
    sort(vb.begin(),vb.end());
    sort(vg.begin(),vg.end());
    int i=0;
    int j =0;
    int ans=0;
    while(i!=vb.size() and j!=vg.size())
    {
        if(abs(vb[i]-vg[j])<2)
        {
            i++;
            j++;
            ans+=1;
        }

        else if(vb[i]<vg[j])
        {
            i++;
        }

        else{
            j++;
        }
    }
    cout<<ans;
}