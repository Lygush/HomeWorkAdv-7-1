#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    std::vector<int> vec {1, 1, 2, 5, 6, 1, 2, 4};
    std::cout << "Before unique: ";
    for (const int& i: vec) {
        std::cout << i << " ";
    }
    std::sort(vec.begin(), vec.end());
    auto it = std::unique(vec.begin(), vec.end());
    vec.erase(it, vec.end());
    std::cout << "\nAfter unique: ";
    for (const int& i: vec) {
        std::cout << i << " ";
    }
}