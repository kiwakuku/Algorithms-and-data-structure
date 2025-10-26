public class LinearSearch {
    public static int linearSearch(int[] arr, int target) {
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] == target) {
                return i;                 // Возвращаем индекс первого совпадения
            }
        }
        return -1;                        // Возврат -1 означает отсутствие значения
    }

    public static void main(String[] args) {
        int[] arr = {10, 20, 80, 30, 60, 50};
        int searchElement = 80;
        int result = linearSearch(arr, searchElement);
        
        if(result == -1){
            System.out.println(searchElement + " отсутствует в массиве.");
        }else{
            System.out.println(searchElement + " находится на индексе " + result);
        }
    }
}