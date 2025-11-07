def binary_search(arr, target):
    low = 0               # Нижняя граница поиска
    high = len(arr) - 1   # Верхняя граница поиска
    
    while low <= high:
        mid = (low + high) // 2  # Средний индекс
        
        # Если нашли нужный элемент
        if arr[mid] == target:
            return mid
        
        # Если средний элемент больше цели, смещаемся влево
        elif arr[mid] > target:
            high = mid - 1
        
        # Иначе смещаемся вправо
        else:
            low = mid + 1
    
    return -1             # Значение не найдено

# Пример использования
if __name__ == "__main__":
    sorted_arr = [2, 3, 4, 10, 40]
    element_to_find = 10
    index = binary_search(sorted_arr, element_to_find)
    
    if index != -1:
        print(f"{element_to_find} найден на индексе {index}")
    else:
        print(f"{element_to_find} не найден")
