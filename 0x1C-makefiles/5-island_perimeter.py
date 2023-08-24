#!/usr/bin/python3
"""that returns the perimeter of the island described in grid"""


def island_perimeter(grid):
    """Return the perimiter of an island.
    The grid represents water by 0 and land by 1."""

    wh = len(grid[0])
    ht = len(grid)
    edges = 0
    s = 0

    for i in range(ht):
        for j in range(wh):
            if grid[i][j] == 1:
                s += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edges += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edges += 1
    return s * 4 - edges * 2
