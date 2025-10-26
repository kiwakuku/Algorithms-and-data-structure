#include <iostream>
using namespace std;

// Вспомогательная рекурсивная функция для объединения двух отсортированных частей массива
void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;      // Размер левой половины
    int n2 = right - mid;         // Размер правой половины
    
    // Создаем временные массивы
    int L[n1], R[n2];             
    
    // Копируем данные в временные массивы
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];
    
    // Индексы для временных массивов и исходного массива
    int i = 0, j = 0, k = left;
    
    // Объединение временной левосторонней и правосторонней половинок
    while (i < n1 && j < n2) {
        if (L[i] <= R[j])
            arr[k++] = L[i++];
        else
            arr[k++] = R[j++];
    }
    
    // Добавляем оставшиеся элементы из левого временного массива
    while (i < n1)
        arr[k++] = L[i++];
    
    // Добавляем оставшиеся элементы из правого временного массива
    while (j < n2)
        arr[k++] = R[j++];
}

// Основная функция сортировки слиянием
void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;       // Срединный индекс
        
        // Рекурсивно сортируем левую половину
        mergeSort(arr, l, m);
        
        // Рекурсивно сортируем правую половину
        mergeSort(arr, m + 1, r);
        
        // Соединяем две отсортированные половины
        merge(arr, l, m, r);
    }
}

// Функция для вывода массива
void printArray(int A[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}

// Тестовая программа
int main() {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    
    printf("Исходный массив\n");
    printArray(arr, arr_size);
    
    mergeSort(arr, 0, arr_size - 1);
    
    printf("\nОтсортированный массив\n");
    printArray(arr, arr_size);
    return 0;
}