#include <iostream>
using namespace std;

// Восстанавливает кучу сверху-вниз
void heapify(int arr[], int n, int root) {
    int largest = root;          // Текущий максимальный элемент
    int leftChild = 2 * root + 1;// Левый потомок
    int rightChild = 2 * root + 2;// Правый потомок
    
    // Проверяем, является ли левый потомок большим
    if (leftChild < n && arr[leftChild] > arr[largest])
        largest = leftChild;
    
    // Проверяем, является ли правый потомок большим
    if (rightChild < n && arr[rightChild] > arr[largest])
        largest = rightChild;
    
    // Если корень изменился, выполняем замену и снова восстанавливаем кучу
    if (largest != root) {
        swap(arr[root], arr[largest]);
        heapify(arr, n, largest);
    }
}

// Основная функция сортировки кучей
void heapSort(int arr[], int n) {
    // Строим начальную кучу (max-heap)
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
    
    // Один за другим извлекаем максимальные элементы из начала кучи
    for (int i = n - 1; i >= 0; i--) {
        swap(arr[0], arr[i]);     // Извлекаем максимум
        heapify(arr, i, 0);       // Восстанавливаем кучу
    }
}

// Функциональная проверка
int main() {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Исходный массив:" << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    
    heapSort(arr, n);
    
    cout << "\nОтсортированный массив:" << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
