#!/usr/bin/python3


def island_perimeter(grid):
  perimeter = 0
  for y in range(len(grid)):
    for x in range(len(grid[0])):
      if grid[y][x] == 1:
        perimeter += 4
        if grid[y][x - 1] == 1:
          perimeter -= 1
        if grid[y][x + 1] == 1:
          perimeter -= 1
        if grid[y - 1][x] == 1:
          perimeter -= 1
        if grid[y + 1][x] == 1:
          perimeter -= 1
  return perimeter

