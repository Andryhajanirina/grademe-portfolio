def common_letters(left: str, right: str) -> str:
    result: list[str] = []
    for char in left:
        if char in right:
            if char not in result:
                result.append(char)
    return "".join(result)
