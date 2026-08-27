def rotate_right(values: list[int], steps: int) -> list[int]:
    if not values:
        return []
    shift = steps % len(values)
    return values[-shift:] + values[:-shift]
