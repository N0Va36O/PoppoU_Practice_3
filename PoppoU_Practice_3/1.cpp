#include <iostream>

using namespace std;

int main() {
    
    setlocale(0,"");
    const double SAZHEN_IN_METERS = 2.1366;
    const double INCH_IN_CENTIMETERS = 2.5;
    const double FOOT_IN_METERS = 0.3048;
    const double DRAM_IN_GRAMS = 3.7325;
    const double OUNCE_IN_GRAMS = 29.86;
    const double POUND_IN_KILOGRAMS = 0.40951;
    const double ARSHIN_IN_METERS = 0.7112;
    const double GOLDMARK_IN_GRAMS = 4.2657;
    const double INCH_IN_MILLIMETERS = 25.3995;

    double value;
    string unit;

    cout << "Введите значение: ";
    cin >> value;
    cout << "Введите единицу измерения: ";
    cin >> unit;

    if (unit == "сажень") {
        cout << value << " саженей = " << value * SAZHEN_IN_METERS << " метров" << endl;
    }
    else if (unit == "дюйм") {
        cout << value << " дюймов = " << value * INCH_IN_CENTIMETERS << " сантиметров" << endl;
    }
    else if (unit == "фут") {
        cout << value << " футов = " << value * FOOT_IN_METERS << " метров" << endl;
    }
    else if (unit == "драхма") {
        cout << value << " драхм = " << value * DRAM_IN_GRAMS << " граммов" << endl;
    }
    else if (unit == "унция") {
        cout << value << " унций = " << value * OUNCE_IN_GRAMS << " граммов" << endl;
    }
    else if (unit == "фунт") {
        cout << value << " фунтов = " << value * POUND_IN_KILOGRAMS << " килограммов" << endl;
    }
    else if (unit == "аршин") {
        cout << value << " аршинов = " << value * ARSHIN_IN_METERS << " метров" << endl;
    }
    else if (unit == "золотник") {
        cout << value << " золотников = " << value * GOLDMARK_IN_GRAMS << " граммов" << endl;
    }
    else if (unit == "дюйм") {
        cout << value << " дюймов = " << value * INCH_IN_MILLIMETERS << " миллиметров" << endl;
    }
    else {
        cout << "Неизвестная единица измерения" << endl;
    }

    return 0;
}
