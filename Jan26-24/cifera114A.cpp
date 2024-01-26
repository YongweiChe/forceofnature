#include <iostream>

int main() {
    int k, l;
    std::cin >> k >> l;
    
    int importance = 0;
    
    while (l > 1) {
        if (l % k != 0) {
            std::cout << "NO" << std::endl;
            return 0;
        }

        l /= k;
        importance++;
    }
    
    if (l == 1) {
        std::cout << "YES " << importance - 1 << std::endl;
    }
    else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}
