#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;
class UnionFind {
   public:
    UnionFind() = default;
    explicit UnionFind(size_t n) : m_parentsOrSizes(n, -1) {}
    int find(int i) {
        if (m_parentsOrSizes[i] < 0) {
            return i;
        }
        return m_parentsOrSizes[i] = find(m_parentsOrSizes[i]);
    }
    void merge(int a, int b) {
        a = find(a);
        b = find(b);
        if (a != b) {
            if (-m_parentsOrSizes[a] < -m_parentsOrSizes[b]) {
                swap(a, b);
            }
            m_parentsOrSizes[a] += m_parentsOrSizes[b];
            m_parentsOrSizes[b] = a;
        }
    }
    bool connected(int a, int b) { return find(a) == find(b); }
    int size(int i) { return -m_parentsOrSizes[find(i)]; }

   private:
    vector<int> m_parentsOrSizes;
};