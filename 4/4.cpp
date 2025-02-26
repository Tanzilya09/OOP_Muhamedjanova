#include <iostream>
using namespace std;
<<<<<<< HEAD
struct employee {
    int n;
    float pocob;
};

int main() {
    setlocale(LC_ALL, "rus"); 
    employee emp1, emp2, emp3;

    cout << "Введите номер сотрудника и его пособие: ";
    cin >> emp1.n >> emp1.pocob;
    cout << "Введите номер сотрудника и его пособие: ";
    cin >> emp2.n >> emp2.pocob;
    cout << "Введите номер сотрудника и его пособие: ";
    cin >> emp3.n >> emp3.pocob;

    cout << "Сотрудник 1: Номер = " << emp1.n << ", Пособие = " << emp1.pocob << "\n";
    cout << "Сотрудник 2: Номер = " << emp2.n << ", Пособие = " << emp2.pocob << "\n";
    cout << "Сотрудник 3: Номер = " << emp3.n << ", Пособие = " << emp3.pocob << "\n";

    return 0;
=======

struct Distance {
    int feet;
    float inches;
};

Distance maxDistance(const Distance& d1, const Distance& d2);

int main() {
    setlocale(LC_ALL, "rus");
    Distance d1, d2;

    cout << "Введите первое расстояние (футы и дюймы): ";
    cin >> d1.feet >> d1.inches;
    cout << "Введите второе расстояние (футы и дюймы): ";
    cin >> d2.feet >> d2.inches;
    Distance maxDist = maxDistance(d1, d2);
    cout << "Наибольшее расстояние: " << maxDist.feet << " футов " << maxDist.inches << " дюймов" << endl;

    return 0;
}

Distance maxDistance(const Distance& d1, const Distance& d2) {
    float total1 = d1.feet * 12 + d1.inches;
    float total2 = d2.feet * 12 + d2.inches;

    return (total1 > total2) ? d1 : d2;
>>>>>>> Repo2/master
}