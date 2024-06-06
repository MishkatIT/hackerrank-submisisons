/*
    Author    : MishkatIT
    Created   : Thursday 06-06-2024 20:23:12
*/

#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

using ll = long long;
using ld = long double;
const ll mod = 1e9 + 7;
const ll N = 2e5 + 10;
const ll inf = 1e9;
const ll linf = 1e18;

ll fib(ll n) {
    ll a = 0, b = 1;
    ll sum = 0;
    while (a + b <= n) {
        if ((a + b) % 2 == 0) {
            sum += a + b;
        }
        ll temp = a + b;
        a = b;
        b = temp;
    }
    return sum;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--) {
        ll n;
        cin >> n;
        cout << fib(n) << '\n';
    }
    return 0;
}