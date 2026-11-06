#include <iostream>
#include <windows.h>
int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            std::cout << i * j << " ";
        }
        std::cout << "Лох" << std::endl;
    }
}