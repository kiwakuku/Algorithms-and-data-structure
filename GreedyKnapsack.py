def greedy_knapsack_2_approx(items, capacity):
    if not items or capacity <= 0:
        return 0, [], 2.0

    # 1. Жадное решение по удельной стоимости
    sorted_items = sorted(items, key=lambda x: x[1] / x[0], reverse=True)
    greedy_value = 0
    greedy_weight = 0
    greedy_selected = []

    for weight, value, idx in sorted_items:
        if greedy_weight + weight <= capacity:
            greedy_weight += weight
            greedy_value += value
            greedy_selected.append(idx)

    # 2. Самый ценный предмет, который помещается
    best_single_value = 0
    best_single_idx = -1
    for weight, value, idx in items:
        if weight <= capacity and value > best_single_value:
            best_single_value = value
            best_single_idx = idx

    best_single_selected = [best_single_idx] if best_single_idx != -1 else []

    # 3. Выбираем лучшее из двух
    if greedy_value >= best_single_value:
        total_value = greedy_value
        selected = greedy_selected
    else:
        total_value = best_single_value
        selected = best_single_selected

    # Коэффициент аппроксимации — 2 (гарантированная оценка)
    approximation_ratio = 2.0

    return total_value, selected, approximation_ratio


def main():
    print("=== 2-аппроксимационный жадный алгоритм для 0-1 рюкзака ===")
    
    # Чтение входных данных от пользователя
    try:
        print("Введите предметы в формате: вес стоимость (один предмет на строку)")
        print("Чтобы завершить ввод, введите пустую строку.")
        
        items = []
        idx = 0
        while True:
            line = input(f"Предмет {idx + 1}: ").strip()
            if not line:
                break
            parts = line.split()
            if len(parts) != 2:
                print("Ошибка: введите два числа — вес и стоимость.")
                continue
            weight = float(parts[0])
            value = float(parts[1])
            if weight <= 0 or value < 0:
                print("Вес должен быть положительным, стоимость — неотрицательной.")
                continue
            items.append((weight, value, idx))
            idx += 1

        if not items:
            print("Нет предметов для обработки.")
            return

        capacity = float(input("Введите вместимость рюкзака: "))
        if capacity < 0:
            print("Вместимость не может быть отрицательной.")
            return

    except ValueError:
        print("Ошибка: введите корректные числа.")
        return

    total_value, selected_indices, ratio = greedy_knapsack_2_approx(items, capacity)

    # Вывод результата
    print("\n=== Результат ===")
    if selected_indices:
        print("Выбранные предметы:")
        for i in selected_indices:
            w, v, _ = items[i]
            print(f"  - Предмет {i + 1}: вес = {w}, стоимость = {v}")
        print(f"Общая стоимость: {total_value}")
    else:
        print("Ни один предмет не помещается в рюкзак.")
        print("Общая стоимость: 0")

    print(f"Коэффициент аппроксимации: {ratio} (гарантировано)")


if __name__ == "__main__":
    main()
