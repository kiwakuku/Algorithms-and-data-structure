#include <iostream>
using namespace std;

// Функция для вывода массива
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Реализация сортировки выбором
void selectionSort(int arr[], int n) {
    // Проходим по каждому элементу массива
    for (int i = 0; i < n - 1; ++i) {     // i - индекс текущего минимального элемента
        int minIndex = i;                 // Предполагаемый минимальный элемент
        
        // Ищем минимальное значение справа от текущего индекса
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;              // Обновляем индекс минимума
            }
        }
    
        // Меняем найденный минимальный элемент с текущим
        swap(arr[i], arr[minIndex]);
    }
}

// Основной метод
int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);      // Вычисление размера массива
    
    cout << "Исходный массив:\n";
    printArray(arr, n);
    
    selectionSort(arr, n);                   // Сортируем массив
    
    cout << "\nОтсортированный массив:\n";
    printArray(arr, n);
    
    return 0;
}
