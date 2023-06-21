// AtCoder ABC 246 E - Bishop 2 (水色, 500 点)
// 迷路の最短路問題なので BFS でやりたくなるが、まともにやると O(N3)で TLE
// してしまう！！ 頂点の持ち方を工夫して 0-1 BFS で解く！
#include <bits/stdc++.h>
using namespace std;
const int INF = 1 << 29;
const vector<int> dx = {1, 1, -1, -1};
const vector<int> dy = {1, -1, 1, -1};
template <class T>
inline bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}
int main(void) {}