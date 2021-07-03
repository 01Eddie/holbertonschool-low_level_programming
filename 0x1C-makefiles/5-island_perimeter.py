#!/usr/bin/python3


def island_perimeter(grid):
    """
        island_perimeter: function to solved
            grid: parameter or arg
            return: perimeter
    """
    d = 0
    perimeter = 0
    height = len(grid)
    length = len(grid[0])

    for line in grid:
        c = 0
        for val in line:
            if val == 1:
                surround = 4
                if c != length - 1 and grid[d][c + 1] == 1:
                    surround -= 1
                if c != 0 and grid[d][c - 1] == 1:
                    surround -= 1
                if d != height - 1 and grid[d + 1][c] == 1:
                    surround -= 1
                if d != 0 and grid[d - 1][c] == 1:
                    surround -= 1
                perimeter += surround
            c += 1
        d += 1
    return perimeter
