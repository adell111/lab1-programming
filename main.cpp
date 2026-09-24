#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    std::cout << "Hello World!" << std::endl;
    std::cout << "Студент: Хакимов Адель" << std::endl;
    std::cout << "Дата: 2026-09-24";
    return 0;
}