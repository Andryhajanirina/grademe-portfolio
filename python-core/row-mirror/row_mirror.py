def mirror_rows(grid: list[list[int]]) -> list[list[int]]:
    return [row[::-1] for row in grid]
