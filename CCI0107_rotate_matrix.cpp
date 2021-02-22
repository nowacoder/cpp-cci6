#include <vector>

using namespace std;

class Solution {
public:
    // in-place rotation, O(1) extra space
    void rotate(vector<vector<int>>& matrix) {
        int N = matrix.size() - 1;
        int n = ( matrix.size() + 1 ) / 2;
        int m = matrix.size() / 2;
        for (int i=0; i<n; i++) {
            for (int j=0; j<m; j++) {
                swap(matrix[i][j], matrix[j][N-i]);
                swap(matrix[N-i][N-j], matrix[N-j][i]);
                swap(matrix[i][j], matrix[N-i][N-j]);
            }
        }
    }
};