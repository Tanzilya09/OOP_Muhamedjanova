#include <iostream>
using namespace std;
<<<<<<< HEAD
struct point {
    int x;
    int y;
};

int main() {
    setlocale(LC_ALL, "rus"); 
    point p1, p2, p3;
    cout << "Введите координаты точки p1: ";
    cin >> p1.x >> p1.y;
    cout << "Введите координаты точки p2: ";
    cin >> p2.x >> p2.y;

    p3.x = p1.x + p2.x;
    p3.y = p1.y + p2.y;

    cout << "Координаты точки p1+p2 равны " << p3.x << "," << p3.y << endl; 

    return 0;
}
=======

double power(double n, int p = 2);

int main() {
    setlocale(LC_ALL, "rus"); 
    double num;
    int exp;
    char choice;

    cout << "Введите число: ";
    cin >> num;
    cout << "Хотите ввести степень? (1=да/0=нет): ";
    cin >> choice;

    if (choice == '1') {
        cout << "Введите степень: ";
        cin >> exp;
        cout << "Результат: " << power(num, exp) << endl;
    }
    else {
        cout << "Результат (по умолчанию в квадрате): " << power(num) << endl;
    }

    return 0;
}

double power(double n, int p) {
    double result = 1;
    for (int i = 0; i < p; i++) {
        result *= n;
    }
    return result;
}
>>>>>>> Repo2/master
