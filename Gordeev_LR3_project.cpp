#include <iostream>
#include <c.math>
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
}

double FindS() {
double S;
s = (a * b);
cout << "Площадь прямоугольника равна: " << S << endl;
}

double FindP() {
double P;
P = 2*(a + b);
cout << "Площадь прямоугольника равна: " << P << endl;
}