//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int numberOfEnclaves(vector<vector<int>> &grid) {
        // Code here
        int rows = grid.size();
        int cols = grid[0].size();

        // Traverse the boundaries and mark reachable land cells
        for (int i = 0; i < rows; ++i) {
            if (grid[i][0] == 1) {
                dfs(grid, i, 0);
            }
            if (grid[i][cols - 1] == 1) {
                dfs(grid, i, cols - 1);
            }
        }

        for (int j = 0; j < cols; ++j) {
            if (grid[0][j] == 1) {
                dfs(grid, 0, j);
            }
            if (grid[rows - 1][j] == 1) {
                dfs(grid, rows - 1, j);
            }
        }

        // Count the number of unmarked land cells
        int count = 0;
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                if (grid[i][j] == 1) {
                    ++count;
                }
            }
        }

        return count;
    }

private:
    void dfs(vector<vector<int>>& grid, int i, int j) {
        int rows = grid.size();
        int cols = grid[0].size();

        if (i < 0 || i >= rows || j < 0 || j >= cols || grid[i][j] == 0) {
            return;
        }

        grid[i][j] = 0; // Mark the cell as visited

        // Explore 4-directionally
        dfs(grid, i + 1, j);
        dfs(grid, i - 1, j);
        dfs(grid, i, j + 1);
        dfs(grid, i, j - 1);
    
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        cout << obj.numberOfEnclaves(grid) << endl;
    }
}
// } Driver Code Ends