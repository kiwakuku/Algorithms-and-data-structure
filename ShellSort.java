import java.util.Arrays;

public class ShellSort {  
    public static void shellSort(int[] arr) {
        int n = arr.length;
        
        // Начальное значение шага h, которое уменьшается постепенно
        for (int gap = n / 2; gap > 0; gap /= 2) {
            // Внутренняя вложенная сортировка вставками с заданным шагом
            for (int i = gap; i < n; i += 1) {
                int temp = arr[i];
                int j;
                
                // Сравниваем элементы с расстоянием gap друг от друга
                for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
                    arr[j] = arr[j - gap];
                
                // Устанавливаем правильный элемент на своё место
                arr[j] = temp;
            }
        }
    }

    public static void main(String[] args) {
        int[] arr = {12, 34, 54, 2, 3};
        System.out.println("Исходный массив: ");
        System.out.println(Arrays.toString(arr));
        
        shellSort(arr);
        
        System.out.println("\nОтсортированный массив: ");
        System.out.println(Arrays.toString(arr));
    }
}
