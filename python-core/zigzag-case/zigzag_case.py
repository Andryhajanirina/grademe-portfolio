def zigzag_letters(text: str) -> str:
    result: str = ""
    is_lower: bool = True
    for i in range(len(text)):
        if text[i].isalpha():
            if is_lower:
                result += text[i].lower()
                is_lower = False
            else:
                result += text[i].upper()
                is_lower = True
        else:
            result += text[i]
    return result
