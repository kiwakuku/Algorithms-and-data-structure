public class FibonacciSearch {
    public static int fibMonaccianSearch(int arr[], int target) {
        int fibMm2 = 0;                     // (m-2)-ое число Фибоначчи
        int fibMm1 = 1;                     // (m-1)-ое число Фибоначчи
        int fibM = fibMm2 + fibMm1;         // M-е число Фибоначчи
        
        // Определяем минимальное число Фибоначчи большее длины массива
        while (fibM < arr.length) {
            fibMm2 = fibMm1;
            fibMm1 = fibM;
            fibM = fibMm2 + fibMm1;
        }
        
        int offset = -1;                   // Индекс последнего сравнения
        
        while (fibM > 1) {
            int i = Math.min(offset+fibMm2, arr.length-1);
            
            // Если цель меньше текущего числа, идём дальше
            if (arr[i] < target) {
                fibM = fibMm1;
                fibMm1 = fibMm2;
                fibMm2 = fibM - fibMm1;
                offset = i;
            }
            
            // Если цель равна текущему числу, возвращаем индекс
            else if (arr[i] > target) {
                fibM = fibMm2;
                fibMm1 = fibMm1 - fibMm2;
                fibMm2 = fibM - fibMm1;
            }
            
            // Нашли целевое значение
            else return i;
        }
        
        // Последний возможный элемент
        if(fibMm1==1 && arr[offset+1]==target)
            return offset+1;
        
        return -1;                      // Целевого элемента нет
    }

    public static void main(String[] args) {
        int[] arr = {10, 22, 35, 40, 45, 50, 80};
        int target = 35;
        
        int index = fibMonaccianSearch(arr, target);
        
        if(index != -1)
            System.out.println(target + " найден на индексе " + index);
        else
            System.out.println(target + " не найден в массиве.");
    }
}
