#include <iostream>
#include <unordered_map>

int main() {
    
    std::unordered_map<std::string, int> myMap;

    myMap["apple"] = 1;
    myMap["banana"] = 2;
    myMap["orange"] = 3;
    
    for (const auto& pair : myMap) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    return 0;
}


