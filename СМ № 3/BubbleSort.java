public class BubbleSortExample {
    public static void bubbleSort(int[] array) {
        boolean swapped;
        do {
            swapped = false;
            
            // Внешний цикл проходит по всему массиву
            for (int i = 0; i < array.length - 1; i++) {
                
                // Если текущий элемент больше следующего, меняем их местами
                if (array[i] > array[i+1]) {
                    int temp = array[i];
                    array[i] = array[i+1];
                    array[i+1] = temp;
                    
                    swapped = true;   // Обозначаем, что произошел обмен
                }
            }
        } while(swapped);           // Повторяем пока были произведены изменения
    }

    public static void main(String args[]) {
        int[] array = {64, 34, 25, 12, 22, 11, 90};
        System.out.println("Исходный массив:");
        printArray(array);
        
        bubbleSort(array);
        
        System.out.println("\nОтсортированный массив:");
        printArray(array);
    }

    private static void printArray(int[] array) {
        for (int value : array) {
            System.out.print(value + " ");
        }
    }
}
