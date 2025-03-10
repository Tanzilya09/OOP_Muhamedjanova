#include <iostream>
using namespace std;

class fraction {
private:
    int numerator; 
    int denominator; 
public:
    fraction() : numerator(0), denominator(1) {}
    fraction(int num, int den) : numerator(num), denominator(den) {
        if (denominator == 0) {
            cout << "Ошибка: знаменатель не может быть 0. Установлен 1.\n";
            denominator = 1;
        }
    }
    void getFraction() {
        char slash;
        cout << "Введите дробь (формат a/b): ";
        cin >> numerator >> slash >> denominator;
        if (denominator == 0) {
            cout << "Ошибка: знаменатель не может быть 0. Установлен 1.\n";
            denominator = 1;
        }
    }
    double toDecimal() const {
        return static_cast<double>(numerator) / denominator;
    }
};

int main() {
    int n;
    cout << "Введите количество дробей: ";
    cin >> n;

    fraction* arr = new fraction[n];
    for (int i = 0; i < n; i++) {
        arr[i].getFraction();
    }

    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i].toDecimal();
    }

    cout << "Среднее значение: " << sum / n << endl;
    delete[] arr;
    return 0;
}
