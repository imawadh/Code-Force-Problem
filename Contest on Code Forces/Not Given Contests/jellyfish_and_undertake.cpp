#include <bits/stdc++.h>
// solved
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        vector<int> arr(c);
        long long int answer = b;
        for (int j = 0; j < c; j++)
        {
            cin >> arr[j];
            answer += min(a - 1, arr[j]);
        }

        cout << answer << endl;
    }
}