#include <iostream>
#include <vector>
#include <stack>
#include <string>

int main() {
    // Создание списка
    std::vector<std::string> vec;
    vec.push_back("элемент1");
    vec.push_back("элемент2");
    std::cout << "Список: ";
    for(const auto& item : vec) {
        std::cout << item << " ";
    }
    std::cout << std::endl;
    
    // Организация стека
    std::stack<std::string> st;
    st.push("элемент1");
    st.push("элемент2");
    std::cout << "Вершина стека: " << st.top() << std::endl;
    st.pop();
    std::cout << "После извлечения размер: " << st.size() << std::endl;
    
    return 0;
}
