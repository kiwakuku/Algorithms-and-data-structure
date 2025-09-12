#Создание списка

#include <list>
#include <iostream>

int main() {
    std::list<int> my_list;

    my_list.push_back(10);
    my_list.push_front(5);

    for (int val : my_list) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    return 0;
}

#include <stack>
#include <string>
#include <iostream>

int main() {
    std::stack<std::string> my_stack;

    my_stack.push("Hello");
    my_stack.push("World");

    std::cout << "Top element: " << my_stack.top() << std::endl;
    my_stack.pop(); // Удаляем элемент
    std::cout << "New top element: " << my_stack.top() << std::endl;

    return 0;
}
