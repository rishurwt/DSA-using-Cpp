class Solution {
public:
    int searchInsert(vector<int>& a, int b) {
        int x = 0, y = a.size() - 1;
        while (x <= y) {
            int z = x + (y - x) / 2;
            if (a[z] == b) return z;
            else if (a[z] < b) x = z + 1;
            else y = z - 1;
        }
        return x;
    }
};