#include <iostream>
using namespace std;
using ll = long long;
ll modpow(ll a, ll n, ll mod) {
    ll res = 1;
    while (n > 0) {
        if (n & 1) res = res * a % mod;
        a = a * a % mod;
        n >>= 1;
    }
    return res;
}
int main(void) {
    // 3^45 mod 1000000007 を計算する
    cout << modpow(2, 10, 1000000007) << endl;
}