#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) { // Проходим цикл по массиву
        int minIndex = i;              // Предполагаемый минимальный элемент

        // Поиск минимального элемента среди оставшихся элементов массива
        for (int j = i + 1; j < n; ++j)
            if (arr[j] < arr[minIndex])
                minIndex = j;
        
        // Меняем местами найденный минимум с элементом на текущей позиции
        swap(arr[i], arr[minIndex]);
    }
}

// Тестовая функция
int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    cout << "Исходный массив:\n";
    for (int i : arr)
        cout << i << ' ';
    cout << '\n';

    selectionSort(arr, n);

    cout << "Отсортированный массив:\n";
    for (int i : arr)
        cout << i << ' ';
    return 0;
}
