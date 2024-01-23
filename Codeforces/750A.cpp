#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int t = 240 - k;
    int i = 1;
    while(t >= 5 * i && i <= n) {
        t -= 5 * i;
        i++;
    }
    cout << i - 1 << endl;
    return 0;
}