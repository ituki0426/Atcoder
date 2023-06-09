#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n = 5;
    for (int bit = 0; bit < (1 << n); ++bit) {
        vector<int> S;
        // iがbitに含まれるかどうか
        for (int i = 0; i < n; ++i)
            if (bit & (1 << i)) S.push_back(i);
        cout << bit << ": {";
        for (int i = 0; i < (int)S.size(); ++i) {
            cout << S[i] << " ";
        }
        cout << "}" << endl;
    }
}