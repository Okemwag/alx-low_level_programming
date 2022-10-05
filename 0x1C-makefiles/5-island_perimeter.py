#!/usr/bin/python3
"""
This module defines island
"""


def island_perimeter(grid):
    """Defiines island representing land & wt with
    0 and 1 respectively
    """
    breadth = len(grid[0])
    length = len(grid)
    edges = 0
    size = 0

    for i in range(length):
        for j in range(breadth):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edges += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edges += 1
    return size * 4 - edges * 2
