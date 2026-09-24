#include <iostream>
#include <windows.h>

auto square(int x) -> int {
    return x * x;
}
int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    auto number{7};
    std::cout << "Число: " << number << std::endl;
    std::cout << "Квадрат: " << square(number) << std::endl;
    return 0;
}