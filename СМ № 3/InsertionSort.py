def insertion_sort(arr):
    # Перебираем каждый элемент начиная со второго
    for i in range(1, len(arr)):
        key = arr[i]
        j = i - 1
        
        # Перемещаем элементы перед ключом вправо,
        # пока не найдем подходящее место для ключа
        while j >= 0 and key < arr[j]:
            arr[j + 1] = arr[j]
            j -= 1
        
        # Размещаем ключ на правильной позиции
        arr[j + 1] = key

# Пример использования
if __name__ == "__main__":
    arr = [12, 11, 13, 5, 6]
    print("Исходный массив:", arr)
    insertion_sort(arr)
    print("Отсортированный массив:", arr)
