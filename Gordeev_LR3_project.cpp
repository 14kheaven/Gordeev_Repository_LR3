#include <iostream>
#include <c.math>
#include <string>
using namespace std;

double EnterA() {
int a;
cout << "Введите положительное число: ";
cin >> a;
cout << endl;
if (a <= 0) {
    cout << "Введите положительное число." << endl;
    return EnterA();
}
cout << "Введеное число: " << a << endl;
}

double EnterB() {
int b;
cout << "Введите положительное число: ";
cin >> b;
cout << endl;
if (b <= 0) {
    cout << "Введите положительное число." << endl;
    return EnterB();
}
cout << "Введеное число: " << b << endl;
}

double FindS() {

}

double FindP() {

}
