// 二分累乗法を用いてa^n を計算する
#include <iostream>
using namespace std;
using ll = long long;
// a^n を計算する
ll pow(ll a, ll n) {
    long long res = 1;
    while (n > 0) {
        if (n & 1) res = res * a;
        a = a * a;
        n >>= 1;
    }
    return res;
}
int main(void) {
    ll a, n;
    cin >> a >> n;
    cout << pow(a, n) << endl;
}