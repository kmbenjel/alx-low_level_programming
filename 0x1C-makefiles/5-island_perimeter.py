#!/usr/bin/python3

<<<<<<< HEAD

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

=======
def island_perimeter(grid):
    return size(grid) * size(grid[0])
>>>>>>> ff4aa8b19ad1e200b148f1547a3deca48476907d
