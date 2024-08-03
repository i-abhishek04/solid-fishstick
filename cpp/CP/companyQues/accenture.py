def is_valid_move(matrix, visited, row, col):
    n = len(matrix)
    return 0 <= row < n and 0 <= col < n and matrix[row][col] != 0 and not visited[row][col]

def dfs(matrix, visited, row, col, oxygen, path, paths, destination):
    if (row, col) == destination:
        paths.append((path[:], oxygen))
        return
    
    n = len(matrix)
    moves = [(0, 1), (1, 0), (0, -1), (-1, 0)]  # Right, Down, Left, Up
    
    for dr, dc in moves:
        new_row, new_col = row + dr, col + dc
        if is_valid_move(matrix, visited, new_row, new_col):
            visited[new_row][new_col] = True
            new_oxygen = oxygen - (matrix[new_row][new_col] + matrix[row][col])
            
            if new_oxygen >= 0:
                path.append(direction(dr, dc))
                dfs(matrix, visited, new_row, new_col, new_oxygen, path, paths, destination)
                path.pop()
            
            visited[new_row][new_col] = False

def direction(dr, dc):
    if dr == 0 and dc == 1:
        return 'R'
    elif dr == 1 and dc == 0:
        return 'D'
    elif dr == 0 and dc == -1:
        return 'L'
    elif dr == -1 and dc == 0:
        return 'U'

def find_paths(matrix, oxygen_capacity):
    n = len(matrix)
    visited = [[False for _ in range(n)] for _ in range(n)]
    paths = []
    destination = (0, n-1) if matrix[0][n-1] != 0 else (n-1, n-1)
    dfs(matrix, visited, 0, 0, oxygen_capacity, [], paths, destination)
    return paths

# Accept user input for n
n = int(input())

# Accept user input for the matrix
matrix = []
# print("Enter the values for the matrix:")
for _ in range(n):
    row = list(map(int, input().split()))
    matrix.append(row)

# Accept user input for oxygen_capacity
oxygen_capacity = int(input())

# Finding paths
paths = find_paths(matrix, oxygen_capacity)

# Displaying paths
if paths:
    print("The available paths are:")
    for path, _ in paths:
        print(''.join(path))
    
    print("The feasible paths with remaining oxygen levels are:")
    for path, oxygen in paths:
        print(''.join(path), oxygen)
else:
    print("No path available to reach the destination")
