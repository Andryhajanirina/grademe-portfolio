def is_alpha_palindrome(text: str) -> bool:
    clean_text = "".join([c.lower() for c in text if c.isalpha()])
    return clean_text == clean_text[::-1] if clean_text else False
