# include <bits/stdc++.h>
using namespace std;
// Solved
int main()
{
    int year;
    cin>>year;
    int digit;
    set <int> year_digit;
    while (year_digit.size()!=4)
    {
        int new_year=year+1;
        while(new_year!=0)
        {
            digit = new_year%10;
            year_digit.insert(digit);
            new_year/=10;
        }

        if(year_digit.size()!=4)
        {
            year_digit.clear();
            year++;
        }
        else{
            cout<<year+1;
        }
    }
}