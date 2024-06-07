#!/usr/bin/python3
"""
5-main
"""
island_perimeter = __import__('5-island_perimeter').island_perimeter

if __name__ == "__main__":
<<<<<<< HEAD
    grid = [[0, 0, 0, 0, 0, 0], [0, 1, 0, 0, 0, 0], [0, 1, 0, 0, 0, 0],
            [0, 1, 1, 1, 0, 0], [0, 0, 0, 0, 0, 0]]
=======
    grid = [
        [0, 0, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 1, 1, 0, 0],
        [0, 0, 0, 0, 0, 0]
    ]
>>>>>>> ff4aa8b19ad1e200b148f1547a3deca48476907d
    print(island_perimeter(grid))
