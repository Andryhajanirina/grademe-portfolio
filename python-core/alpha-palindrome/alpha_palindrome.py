def is_alpha_palindrome(text: str) -> bool:
    if text == "" or text is None:
        return False
    clean_str = "".join(char.lower() for char in text if char.isalpha())
    if clean_str:
        return clean_str == clean_str[::-1]
    else:
        return False