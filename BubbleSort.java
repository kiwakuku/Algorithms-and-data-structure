public class BubbleSortExample {

    // Метод для печати массива
    public static void printArray(int[] array) {
        System.out.print("["); 
        for (int i = 0; i < array.length; i++) {
            System.out.print(array[i]);
            if(i != array.length - 1){
                System.out.print(", ");
            }
        }
        System.out.println("]");
    }

    // Метод для сортировки пузырьком
    public static void bubbleSort(int[] array) {
        boolean swapped;                  // Переменная для отслеживания наличия перестановок
        int n = array.length;             // Длина массива
        
        do {
            swapped = false;              // Сбрасываем флаг перед каждым новым проходом
            
            // Проходим по массиву и проверяем пары соседних элементов
            for (int i = 1; i < n; i++) {
                if (array[i - 1] > array[i]) {       // Если предыдущий больше следующего
                    // Переставляем элементы местами
                    int temp = array[i];
                    array[i] = array[i - 1];         
                    array[i - 1] = temp;
                    
                    swapped = true;          // Есть перестановка
                }
            }
            
            n--;                             // Уменьшаем длину, поскольку самый большой элемент уже на своём месте
        } while(swapped);                     // Повторяем цикл, пока были произведены изменения
    }

    // Тестирование метода
    public static void main(String[] args) {
        int[] data = {64, 34, 25, 12, 22, 11}; // Исходный несортированный массив
        
        System.out.println("Исходный массив:");
        printArray(data);
        
        bubbleSort(data);                      // Выполняем сортировку пузырьком
        
        System.out.println("\nОтсортированный массив:");
        printArray(data);
    }
}