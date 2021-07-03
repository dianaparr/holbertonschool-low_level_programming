#!/usr/bin/python3
""" Module that contains one function called islad_perimeter """


def island_perimeter(grid):
    """ Function that returns the perimeter of the island.

        Parameter:
                  grid (list of list of integers): description
                                                 of the island.
    """
    # sum of all sides, grid = 4L if L = 1
    perimeter = 0
    rows = len(grid)
    columns = len(grid[0])
    for row in range(0, rows):
        for pos in range(0, columns):
            # all values in that row are 0
            if grid[row][pos] == 0:
                continue
            # if the element of the row above,
            # which is in the same position as pos at this moment,
            # is zero (there is water)
            if row == 0 or grid[row-1][pos] == 0:
                perimeter += 1
            # same line, previous element == 0 [left]
            if pos == 0 or grid[row][pos-1] == 0:
                perimeter += 1
            # down row at the same point of pos.
            if row == rows-1 or grid[row+1][pos] == 0:
                perimeter += 1
            # same row, next element, [right]
            if pos == columns-1 or grid[row][pos+1] == 0:
                perimeter += 1
    return perimeter
