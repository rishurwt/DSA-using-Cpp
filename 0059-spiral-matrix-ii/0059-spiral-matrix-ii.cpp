class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> m(n, vector<int>(n));
        int t = 0, b = n - 1, l = 0, r = n - 1, val = 1;
        while (t <= b && l <= r) {
            for (int i = l; i <= r; ++i) m[t][i] = val++;
            t++;
            for (int i = t; i <= b; ++i) m[i][r] = val++;
            r--;
            for (int i = r; i >= l; --i) m[b][i] = val++;
            b--;
            for (int i = b; i >= t; --i) m[i][l] = val++;
            l++;
        }
        return m;
    }
};