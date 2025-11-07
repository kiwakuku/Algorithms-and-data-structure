#include <iostream>
#include <string>
using namespace std;

int count_vowels(const string& s, int index = 0) {
    // Базовый случай: дошли до конца строки
    if (index >= s.length()) {
        return 0;
    }

    // Проверяем текущий символ
    char current = s[index];
    bool is_vowel = (current == 'a' || current == 'e' || current == 'i' ||
                      current == 'o' || current == 'u' ||
                      current == 'A' || current == 'E' || current == 'I' ||
                      current == 'O' || current == 'U');

    // Рекурсивный вызов для следующего индекса
    return (is_vowel ? 1 : 0) + count_vowels(s, index + 1);
}

int main() {
    string text = "Hello World";
    cout << count_vowels(text) << endl;  // Вывод: 3
    return 0;
}
