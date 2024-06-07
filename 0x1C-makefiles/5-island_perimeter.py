#!/usr/bin/python3

"""
    A function def island_perimeter(grid): that returns the
    perimeter of the island described in grid
"""


def island_perimeter(grid):
    """Calculate the perimeter of the island"""
    perimeter = 0
    width = len(grid[0])
    height = len(grid)
    for y in range(len(grid)):
        for x in range(len(grid[0])):
            if grid[y][x] == 1:
                perimeter += 4
                if x > 0 and grid[y][x - 1] == 1:
                    perimeter -= 1
                if x < width - 1 and grid[y][x + 1] == 1:
                    perimeter -= 1
                if y > 0 and grid[y - 1][x] == 1:
                    perimeter -= 1
                if y < height - 1 and grid[y + 1][x] == 1:
                    perimeter -= 1
    return perimeter
