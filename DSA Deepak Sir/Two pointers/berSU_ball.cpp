#include <bits/stdc++.h>
using namespace std;

int main() {
    int b, g;
    cin >> b;
    set<int> boys;
    for (int i = 0; i < b; i++) {
        int a;
        cin >> a;
        boys.insert(a);
    }
    cin >> g;
    set<int> girls;
    for (int i = 0; i < g; i++) {
        int a;
        cin >> a;
        girls.insert(a);
    }
    int count = 0;
    for (auto boy_it = boys.begin(); boy_it != boys.end(); boy_it++) {
        for (auto girl_it = girls.begin(); girl_it != girls.end(); girl_it++) {
            int diff = *boy_it - *girl_it;
            diff = abs(diff);
            if (diff == 1) {
                count++;
            }
        }
    }
    cout << count << '\n';
}
