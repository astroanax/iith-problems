#!/usr/bin/env python3
# this problem is just like taking the transpose of a matrix

def get_grid():
    N = int(input())
    grid = []
    for i in range(N):
        grid.append([])
        for n in input().split()[:N]:
            grid[i].append(n)
    return grid

def rotate_grid(grid):
    if len(grid)%2==0:
        pass:
    else: