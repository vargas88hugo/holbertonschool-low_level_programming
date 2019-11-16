#!/usr/bin/python3
""" This is a module to calculate the perimeter of the island grid """


def island_perimeter(grid):
    """ method that returns the perimeter of the island grid """
    per = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                if grid[i - 1][j] == 0:
                    per += 1
                if grid[i + 1][j] == 0:
                    per += 1
                if grid[i][j - 1] == 0:
                    per += 1
                if grid[i][j + 1] == 0:
                    per += 1

    return per
