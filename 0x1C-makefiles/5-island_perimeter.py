#!/usr/bin/python3
"""Calculates the perimeter of island"""


def island_perimeter(grid):
    """Returns the perimeter of the island described in grid
    0 represents a water zone
    1 represents a land zone
    One cell is a square with side length 1
    Grid cells are connected horizontally/vertically (not diagonally).
    Grid is rectangular, width and height don’t exceed 100
    """
    perimeter = 0
    for i in range(1, len(grid) - 1):
        row = grid[i]
        for j in range(1, len(row) - 1):
            if grid[i][j] == 1:
                if grid[i][j - 1] != 1 and grid[i][j + 1] != 1 and\
                   grid[i - 1][j] != 1 and grid[i + 1][j] != 1:
                    continue
                if grid[i][j - 1] == 0:
                    perimeter += 1
                if grid[i - 1][j] == 0:
                    perimeter += 1
                if grid[i + 1][j] == 0:
                    perimeter += 1
                if grid[i][j + 1] == 0:
                    perimeter += 1

    return perimeter
