// 10進数を2進数に変換するプログラム
#include <math.h>
#include <iostream>
using namespace std;
using ll = long long;
ll binary(ll bina) {
    int ans = 0;
    for (int i = 0; bina > 0; i++) {
        ans += (bina % 2) * pow(10, i);
        bina /= 2;
    }
    return ans;
}
int main(void) {
    ll a;
    cin >> a;
    cout << binary(a) << endl;
}