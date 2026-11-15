#include "project/map.h"

#include <iostream>
#include <string>

int main() {
    Map map;
    map.insert("apple", 10);
    map.insert("banana", 20);
    map.insert("cherry", 30);

    std::cout << "Size: " << map.size() << '\n';
    std::cout << "apple -> " << map.at("apple") << '\n';
    std::cout << "banana -> " << map.at("banana") << '\n';

    return 0;
}
