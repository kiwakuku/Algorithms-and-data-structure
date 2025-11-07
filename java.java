public class VowelCounter {
    public static int countVowels(String s, int index) {
        // Базовый случай: достигли конца строки
        if (index >= s.length()) {
            return 0;
        }

        // Проверяем текущий символ
        char current = s.charAt(index);
        boolean isVowel = "aeiouAEIOU".indexOf(current) != -1;

        // Рекурсивный вызов для следующего индекса
        return (isVowel ? 1 : 0) + countVowels(s, index + 1);
    }

    // Упрощённый вызов (начинаем с индекса 0)
    public static int countVowels(String s) {
        return countVowels(s, 0);
    }

    public static void main(String[] args) {
        String text = "Hello World";
        System.out.println(countVowels(text));  // Вывод: 3
    }
}
