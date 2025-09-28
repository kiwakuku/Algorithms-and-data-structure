#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_map<std::string, int> ht = {{"apple", 10}, {"banana", 20}, {"cherry", 30}};

    for (const auto& p : ht)
        std::cout << p.first << " -> " << p.second << "\n";

    return 0;
}
