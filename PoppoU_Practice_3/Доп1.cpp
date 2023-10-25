#include <iostream>

int main() {
    int height;
    setlocale(0, "");
    std::cout << "Введите высоту домика: ";
    std::cin >> height;

    if (height < 3) {
        std::cout << "Высота домика должна быть не менее 3." << std::endl;
        return 1;
    }

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < height - i; j++) {
            std::cout << " ";
        }
        for (int j = 0; j < i * 2 + 1; j++) {
            if (j == 0 || j == i * 2) {
                std::cout << "/";
            }
            else {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }

    for (int i = -8; i < height; i++) {
        std::cout << "-";
    }

    std::cout << std::endl;
    for (int i = 0; i < height; i++) {
        std::cout << "|";
        for (int j = 0; j < height * 2 - 1; j++) {
            if (j == 0 || j == height * 2 - 2) {
                std::cout << "|";
            }
            else {
                std::cout << " ";
            }
        }
        std::cout << "|" << std::endl;
    }

    // Основание
    for (int i = -8; i < height; i++) {
        std::cout << "-";
    }
    std::cout << std::endl;

    return 0;
}
