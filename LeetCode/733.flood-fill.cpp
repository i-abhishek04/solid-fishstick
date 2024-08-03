/*
 * @lc app=leetcode id=733 lang=cpp
 *
 * [733] Flood Fill
 */

// @lc code=start
class Solution {
public:
    void dfs(int rw, int cl, const int &color, const int &init, int r, int c,
             vector<vector<int>> &image, vector<vector<bool>> &visited)
    {
        visited[rw][cl] = 1;
        image[rw][cl] = color;
        for (int delrow = -1; delrow <= 1; delrow++)
        {
            for (int delcol = -1; delcol <= 1; delcol++)
            {
                int newrw = rw + delrow;
                int newcl = cl + delcol;
                if ((delrow == 0 || delcol == 0) && newrw >= 0 && newrw < r &&
                    newcl >= 0 && newcl < c && image[newrw][newcl] == init &&
                    !visited[newrw][newcl])
                {
                    dfs(newrw, newcl, color, init, r, c, image, visited);
                }
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc,
                                  int color)
    {
        vector<vector<int>> newimg(image);
        int rows = image.size();
        int cols = image[0].size();
        vector<vector<bool>> visited(rows, vector<bool>(cols, false));
        dfs(sr, sc, color, image[sr][sc], rows, cols, newimg, visited);
        return newimg;
    }
};
// @lc code=end

