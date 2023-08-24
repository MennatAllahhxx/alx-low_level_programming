#!/usr/bin/python3
"""
This is module '5-island_perimeter'

This module contains one function: island_perimeter
"""


def island_perimeter(grid):
    """
    an instance to find per of island
    :param grid: grid to look inside
    :return: perimeter of the island
    """
    d = 0
    perimeter = 0
    height = len(grid)
    length = len(grid[0])
    for i in grid:
        c = 0
        for j in i:
            if j == 1:
                surr = 4
                if c != (length - 1):
                    if grid[d][c + 1] == 1:
                        surr -= 1
                if c != 0:
                    if grid[d][c - 1] == 1:
                        surr -= 1
                if d != (height - 1):
                    if grid[d + 1][c] == 1:
                        surr -= 1
                if d != 0:
                    if grid[d - 1][c] == 1:
                        surr -= 1
                perimeter += surr
            c += 1
        d += 1
    return (perimeter)
