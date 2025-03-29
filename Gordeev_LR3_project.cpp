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

}

double FindS() {

}

double FindP() {

}
