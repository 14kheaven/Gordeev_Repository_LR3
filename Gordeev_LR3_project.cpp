#include <iostream>
#include <cmath>
#include <string>
using namespace std;

double EnterA() {
int a;
cout << "Введите положительное число A: ";
cin >> a;
cout << endl;
if (a <= 0) {
    cout << "Введите положительное число." << endl;
    return EnterA();
}
cout << "Введеное число A: " << a << endl;
return a;
}


double EnterB() {
int b;
cout << "Введите положительное число B: ";
cin >> b;
cout << endl;
if (b <= 0) {
    cout << "Введите положительное число." << endl;
    return EnterB();
}
cout << "Введеное число B: " << b << endl;
return b;
}

double FindS() {
double S;
 if (a <= 0 || b <= 0) {
        cout << "Ошибка: сначала введите A и B!" << endl;
        return 0;
S = (a * b);
cout << "Площадь прямоугольника равна: " << S << endl;
return S;
}

double FindP() {
double P;
 if (a <= 0 || b <= 0) {
        cout << "Ошибка: сначала введите A и B!" << endl;
        return 0;
P = 2*(a + b);
cout << "Площадь прямоугольника равна: " << P << endl;
return P;
}

int main {
int choice;

    bool exitProgram = false;



    while (!exitProgram) {

        cout << "\n=== МЕНЮ ===" << endl;

        cout << "1. Ввести число A" << endl;

        cout << "2. Ввести число B" << endl;

        cout << "3. Найти площадь (A × B)" << endl;

        cout << "4. Найти периметр (2 × (A + B))" << endl;

        cout << "5. Выход" << endl;

        cout << "Выберите действие: ";

        cin >> choice;



        switch (choice) {

            case 1:

                EnterA();

                break;

            case 2:

                EnterB();

                break;

            case 3:

                FindS();

                break;

            case 4:

                FindP();

                break;

            case 5:

                exitProgram = true;

                cout << "Программа завершена." << endl;

                break;

            default:

                cout << "Ошибка. Неверный выбор! Попробуйте снова." << endl;

                break;

        }

    }
}