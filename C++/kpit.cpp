#include <bits/stdc++.h>
using namespace std;

int findLongestFromACell(int i, int j, int mat[][100],
                        int dp[][100], int n)
{
    if (i < 0 || i >= n || j < 0 || j >= n)
        return 0;

    if (dp[i][j] != -1)
        return dp[i][j];

    int x = INT_MIN, y = INT_MIN, z = INT_MIN, w = INT_MIN;

    if (j < n - 1 && ((mat[i][j] + 1) == mat[i][j + 1]))
        x = 1 + findLongestFromACell(i, j + 1, mat, dp, n);

    if (j > 0 && (mat[i][j] + 1 == mat[i][j - 1]))
        y = 1 + findLongestFromACell(i, j - 1, mat, dp, n);

    if (i > 0 && (mat[i][j] + 1 == mat[i - 1][j]))
        z = 1 + findLongestFromACell(i - 1, j, mat, dp, n);

    if (i < n - 1 && (mat[i][j] + 1 == mat[i + 1][j]))
        w = 1 + findLongestFromACell(i + 1, j, mat, dp, n);

    return dp[i][j] = max({x, y, z, w, 1});
}

int finLongestOverAll(int mat[][100], int n)
{
    int result = 1;

    int dp[n][100];
    memset(dp, -1, sizeof dp);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (dp[i][j] == -1)
                findLongestFromACell(i, j, mat, dp, n);

            result = max(result, dp[i][j]);
        }
    }

    return result;
}

int main()
{
    int n;
    cout << "Enter Dimension of matrix: n" << endl;
    cin >> n;
    int mat[100][100];
    cout<< "Enter Elements of Matrix"<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> mat[i][j];
        }
    }

    cout << "Length of the longest path is "
        << finLongestOverAll(mat, n);
    return 0;
}
