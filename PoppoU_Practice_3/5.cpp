#include <iostream>
using namespace std;
int main() {
    int height;

    cout << "Введите высоту трапеции: ";
    cin >> height;

    if (height < 2) {
        cout << "Высота должна быть не менее 2." << endl;
        return 1;
    }

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < height - i - 1; j++) {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + height; j++) {
            cout << "*";
        }
        cout << endl;
    }
    
    int height_1;

    cout << "Введите высоту треугольника: ";
    cin >> height_1;

    cout << "Равнобедренный треугольник:" << endl;
    for (int i = 0; i < height_1; ++i) {
        for (int j = 0; j < height_1 - i - 1; ++j) {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; ++j) {
            cout << "*";
        } 
        cout << endl;
    }

    return 0;
}
