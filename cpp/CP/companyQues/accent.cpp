#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

bool isValidMove(vector<vector<int>> &matrix, vector<vector<bool>> &visited, int row, int col)
{
    int n = matrix.size();
    return 0 <= row && row < n && 0 <= col && col < n && matrix[row][col] != 0 && !visited[row][col];
}

void dfs(vector<vector<int>> &matrix, vector<vector<bool>> &visited, int row, int col, int oxygen, vector<char> &path, vector<pair<vector<char>, int>> &paths, pair<int, int> &destination)
{
    if (make_pair(row, col) == destination)
    {
        paths.push_back(make_pair(path, oxygen));
        return;
    }

    int n = matrix.size();
    vector<pair<int, int>> moves = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}}; // Right, Down, Left, Up

    for (auto [dr, dc] : moves)
    {
        int new_row = row + dr, new_col = col + dc;
        if (isValidMove(matrix, visited, new_row, new_col))
        {
            visited[new_row][new_col] = true;
            int new_oxygen;
            if (matrix[new_row][new_col] == 9)
                new_oxygen = oxygen_capacity;
            else
                new_oxygen = oxygen - matrix[new_row][new_col];

            if (new_oxygen >= 0)
            {
                path.push_back((dr == 0 && dc == 1) ? 'R' : (dr == 1 && dc == 0) ? 'D'
                                                        : (dr == 0 && dc == -1)  ? 'L'
                                                                                 : 'U');
                dfs(matrix, visited, new_row, new_col, new_oxygen, path, paths, destination);
                path.pop_back();
            }

            visited[new_row][new_col] = false;
        }
    }
}

vector<pair<vector<char>, int>> findPaths(vector<vector<int>> &matrix, int oxygen_capacity, pair<int, int> &destination)
{
    int n = matrix.size();
    vector<vector<bool>> visited(n, vector<bool>(n, false));
    vector<pair<vector<char>, int>> paths;
    vector<char> path;
    dfs(matrix, visited, 0, 0, oxygen_capacity, path, paths, destination);
    return paths;
}

int main()
{
    int n;
    cout << "Enter the size of the matrix (n x n): ";
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n));
    cout << "Enter the values for the matrix:" << endl;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> matrix[i][j];
        }
    }

    int oxygen_capacity;
    cout << "Enter the oxygen capacity: ";
    cin >> oxygen_capacity;

    // Destination can be top right corner or bottom right corner
    pair<int, int> destination1 = make_pair(0, n - 1);
    pair<int, int> destination2 = make_pair(n - 1, n - 1);

    vector<pair<vector<char>, int>> paths1 = findPaths(matrix, oxygen_capacity, destination1);
    vector<pair<vector<char>, int>> paths2 = findPaths(matrix, oxygen_capacity, destination2);

    vector<pair<vector<char>, int>> &paths = (paths1.empty()) ? paths2 : paths1;

    if (!paths.empty())
    {
        cout << "The available paths are:" << endl;
        for (auto &[path, _] : paths)
        {
            for (char dir : path)
            {
                cout << dir;
            }
            cout << endl;
        }

        cout << "The feasible paths with remaining oxygen levels are:" << endl;
        for (auto &{path, oxygen} : paths)
        {
            for (char dir : path)
            {
                cout << dir;
            }
            cout << " " << oxygen << endl;
        }
    }
    else
    {
        cout << "No path available to reach any of the destinations" << endl;
    }

    return 0;
}
