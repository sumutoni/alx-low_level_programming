#!/usr/bin/python3
"""module to calculate perimeter of island given by grid"""


def island_perimeter(grid):
    """implementation of function"""
    height = len(grid)
    width = len(grid[0])
    size = 0
    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if j > 0 and grid[i][j - 1] == 1 and grid[i][j - 2] == 0:
                    if i > 0 and (grid[i - 1][j] == 1 or grid[i - 1][j - 1]):
                        size += 1
    return size * 2
