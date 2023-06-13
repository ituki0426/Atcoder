// アルゴ式：方程式を解く
#include <iostream>
using namespace std;
int N;
int isOk(int x) {
    int ans = x * (x * (x + 1) + 2) + 3;
    if (ans == N) return 0;

    if (ans > N) return 1;

    if (ans < N) return 2;
}
int binary_serch() {
    int L = 0;
    int R = 50;
    while (L <= R) {
        int mid = (L + R) / 2;
        int ans = isOk(mid);
        if (ans == 0)
            return mid;
        else if (ans == 1)
            R = mid - 1;
        else if (ans == 2)
            L = mid + 1;
    }
}
int main(void) {
    cin >> N;
    cout << binary_serch() << endl;
    return 0;
}