def is_safe(board, row, col):

    for i in range(row):
        if board[i][col] == 'Q':
            return False

    for i, j in zip(range(row, -1, -1), range(col, -1, -1)):
        if board[i][j] == 'Q':
            return False
    for i, j in zip(range(row, -1, -1), range(col, len(board))):
        if board[i][j] == 'Q':
            return False

    return True

def count_queen_arrangements(board, row):
    if row == len(board):
        return 1

    count = 0
    for col in range(len(board)):
        if board[row][col] == '.' and is_safe(board, row, col):
            board[row][col] = 'Q'
            count += count_queen_arrangements(board, row + 1)
            board[row][col] = '.'  # Backtrack

    return count

# Read input
board = []
for _ in range(8):
    row = list(input().strip())
    board.append(row)

result = count_queen_arrangements(board, 0)
print(result)
