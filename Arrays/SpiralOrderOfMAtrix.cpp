#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
    vector<int> result;
    if (matrix.empty()) return result;

    int top = 0;
    int bottom = matrix.size() - 1;
    int left = 0;
    int right = matrix[0].size() - 1;

    while (top <= bottom && left <= right) {
        for (int col = left; col <= right; ++col)
            result.push_back(matrix[top][col]);
        ++top;

        for (int row = top; row <= bottom; ++row)
            result.push_back(matrix[row][right]);
        --right;

        if (top <= bottom) {
            for (int col = right; col >= left; --col)
                result.push_back(matrix[bottom][col]);
            --bottom;
        }

        if (left <= right) {
            for (int row = bottom; row >= top; --row)
                result.push_back(matrix[row][left]);
            ++left;
        }
    }

    return result;
}

int main() {
    int m, n;
    cout << "Enter number of rows (m): ";
    cin >> m;
    cout << "Enter number of columns (n): ";
    cin >> n;

    vector<vector<int>> matrix(m, vector<int>(n));
    cout << "Enter matrix elements row-wise:\n";
    for (int i = 0; i < m; ++i)
        for (int j = 0; j < n; ++j)
            cin >> matrix[i][j];

    vector<int> result = spiralOrder(matrix);

    cout << "Spiral Order: ";
    for (int num : result)
        cout << num << " ";
    cout << endl;

    return 0;
}