def quicksort(arr):
    if len(arr) <= 1:
        return arr
    pivot = arr[len(arr) // 2]     # Выбираем опорный элемент (средний элемент)
    left = [x for x in arr if x < pivot]  # Элементы меньше опорного
    middle = [x for x in arr if x == pivot]  # Элементы равные опорному
    right = [x for x in arr if x > pivot]   # Элементы больше опорного
    
    # Рекурсивно сортируем левую и правую части
    return quicksort(left) + middle + quicksort(right)

# Пример использования
if __name__ == "__main__":
    example_list = [3, 6, 8, 10, 1, 2, 1]
    sorted_list = quicksort(example_list)
    print("Отсортированный список:", sorted_list)
