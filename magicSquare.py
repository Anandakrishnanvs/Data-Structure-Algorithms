def magic_sqaure(n):

    square = [[0] * n for _ in range(n)]
    row , col = 0,n//2
    for num in range(1, n * n + 1):
        square[row][col] = num
        new_row , new_col = (row-1)%n , (col+1)%n
        if square[new_row][new_col]!=0:
            new_row , new_col = (row+1)%n , col
        row , col = new_row,new_col
    return square
def print_sqaure(square):
    for row in square:
        print("".join(f"{v:3}" for v in row))

n = 3
sq = magic_sqaure(n)
print_sqaure(sq)
