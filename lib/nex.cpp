#include <iostream>
#include <string>
#include <vector>
using namespace std;
//nex[i][c] ← 文字列Sのi文字目以降で最初に文字cが出現する最小の添え字(そんざいしない場合はN)
vector<vector<int>> calc_next(const string &S) {
    int N = (int)S.size();

    // 答え
    vector<vector<int>> res(N + 1, vector<int>(26, N));

    for (int i = N - 1; i >= 0; --i) {
        res[i] = res[i + 1];
        res[i][S[i] - 'a'] = i;
    }
    return res;
}
