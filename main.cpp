#include <iostream>

int average(int a, int b) {
    return (a + b) / 2;
}

int double_value(int x) {
    return x * 2;
}

int main() {
    std::cout << "Average: " << average(10, 20) << std::endl;
    std::cout << "Double: " << double_value(5) << std::endl;
    return 0;
}
