#!/usr/bin/python3
"""
returns the perimeter of the island described in grid

"""


def island_perimeter(grid):
    """
    returns the perimeter of the island described in grid
    """
    fil = len(grid)
    col = len(grid[fil - 1])
    perimeter = 0
    for f in range(fil):
        for c in range(col):
            if grid[f][c] == 1:
                if f > 0 and grid[f - 1][c] == 0:
                    perimeter += 1
                if f < fil - 1 and grid[f + 1][c] == 0:
                    perimeter += 1
                if c > 0 and grid[f][c - 1] == 0:
                    perimeter += 1
                if c < col - 1 and grid[f][c + 1] == 0:
                    perimeter += 1
    return perimeter
