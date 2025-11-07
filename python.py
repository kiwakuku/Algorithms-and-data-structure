def count_vowels(s):
    # Базовый случай: пустая строка
    if not s:
        return 0

    # Проверяем первый символ и рекурсивно обрабатываем остаток
    first_char = s[0]
    rest = s[1:]

    if first_char.lower() in 'aeiou':
        return 1 + count_vowels(rest)
    else:
        return count_vowels(rest)

# Пример использования
text = "Hello World"
print(count_vowels(text))  # Вывод: 3

