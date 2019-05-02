#include <iostream>
#include <cmath>

using namespace std;

// obliczanie odleglosci miedzy postaciami [twierdzenie pitagorasa]

float x_1, y_1, x_2, y_2, d;

int main()
{
    // cubic root = pierwiastek 3 stopnia
    cout << cbrt(27) << endl;

    // alternatywa = obliczanie pierwiastka dowolnego stopnia funkcja pow [odwrotnosc potegi]
    cout << "pow(49, 0.5)" << pow(49, 0.5) << endl;   // odwrotnosc pierwiastka kwadratowego = 1/2 = 0.5
    cout << "pow(27, 1/3)" << pow(27, 1/3) << endl;   // 1 i 3 to int = wynik nieprawidlowy
    cout << "pow(27, 1.0/3.0)" << pow(27, 1.0/3.0) << endl;   // dodanie .0 = float = wynik dokladny

    cout << "A (x1, y1): " << endl;
    cin >> x_1 >> y_1;
    cout << "B (x2, y2): " << endl;
    cin >> x_2 >> y_2;

    // square root = pierwiastek kwadratowy
    d = sqrt ( pow(x_2-x_1,2) + pow(y_2-y_1,2) );

    cout << d;

    return 0;
}
