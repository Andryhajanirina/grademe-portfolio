def delimiters_balanced(text: str) -> bool:
    stack: list[str] = []
    pairs: dict[str, str] = {"(":")", "[":"]", "{":"}"}
    for bracket in text:
        if bracket in pairs:
            stack.append(bracket)
        elif bracket in pairs.values():
            if not stack or pairs[stack.pop()] != bracket:
                return False
    return len(stack) == 0