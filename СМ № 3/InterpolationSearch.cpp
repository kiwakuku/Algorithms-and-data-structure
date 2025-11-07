#include <iostream>
using namespace std;

int interpolationSearch(int arr[], int n, int target) {
    int low = 0, high = n - 1;
    
    while ((target >= arr[low]) && (target <= arr[high])) {
        if (low == high) {                       // Если диапазон свелся к одному элементу
            if (arr[low] == target)
                return low;
            return -1;
        }
        
        // Интерполяционная формула для вычисления приближенного индекса
        int pos = low + (((double)(high - low) /
                          (arr[high] - arr[low])) *
                         (target - arr[low]));
        
        // Найдено точное совпадение
        if (arr[pos] == target)
            return pos;
        
        // Продолжаем искать в левом диапазоне
        if (arr[pos] < target)
            low = pos + 1;
        
        // Или продолжаем искать в правом диапазоне
        else
            high = pos - 1;
    }
    
    return -1;                                   // Элемент не найден
}

// Точка входа программы
int main() {
    int arr[] = {10, 12, 13, 16, 18, 19, 20, 21, 22, 23, 24, 33, 35, 42, 47};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 18;
    
    int index = interpolationSearch(arr, n, target);
    
    if(index != -1)
        cout << "Элемент " << target << " найден на индексе " << index << endl;
    else
        cout << "Элемент " << target << " не найден." << endl;
    
    return 0;
}
