def boundary_traversal(matrix, n, m):
    result = []

    if n == 1:
        return matrix[0]
    if m == 1:
        return [matrix[i][0] for i in range(n)]

    for i in range(m):
        result.append(matrix[0][i])

    for i in range(1, n):
        result.append(matrix[i][m - 1])

    if n > 1:
        for i in range(m - 2, -1, -1):
            result.append(matrix[n - 1][i])

    if m > 1:
        for i in range(n - 2, 0, -1):
            result.append(matrix[i][0])

    return result


n = int(input("Enter the number of rows: "))
m = int(input("Enter the number of columns: "))

# Input matrix elements
matrix = []
for i in range(n):
    row = list(map(int, input(
        f"Enter elements for row {i + 1} (space-separated): "
    ).split()))
    matrix.append(row)

result = boundary_traversal(matrix, n, m)
print(" ".join(map(str, result)))
