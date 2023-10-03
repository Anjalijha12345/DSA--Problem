def rotate_matrix(matrix):
    if not matrix:
        return []

    # Transpose the matrix
    transposed_matrix = [[matrix[j][i] for j in range(len(matrix))] for i in range(len(matrix[0]))]

    # Reverse the order of rows to complete the rotation
    rotated_matrix = [row[::-1] for row in transposed_matrix]

    return rotated_matrix

# Example usage:
matrix = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
]

rotated_matrix = rotate_matrix(matrix)
for row in rotated_matrix:
    print(row)
