#include <iostream>

void nNumberTriangle(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            std::cout << j << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    // Example usage of nNumberTriangle function
    int rows = 5;
    nNumberTriangle(rows);

    return 0;
}
