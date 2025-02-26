#include <iostream>
using namespace std;
<<<<<<< HEAD
struct Dis {
    int f;
    float de;
};
struct Volume { 
    Dis length;
    Dis width; 
    Dis height; 
};
float feet(Dis);

int main() {
    setlocale(LC_ALL, "rus"); 
    Volume room = { {10, 6.0}, {12, 4.0}, {8, 2.0} };
    float l = feet(room.length); 
    float w = feet(room.width);
    float h = feet(room.height); 
    float volume = l * w * h;
    cout << "Объем помещения: " << volume << " кубических футов" << endl;

    return 0;
} 
float feet(Dis d) { 
    return d.f + d.de / 12.0;
} 
=======

void zeroSmaller(int& a, int& b);

int main() {
    setlocale(LC_ALL, "rus"); 
    int num1, num2;

    cout << "Введите два числа: ";
    cin >> num1 >> num2;

    zeroSmaller(num1, num2);

    cout << "После обработки: " << num1 << " " << num2 << endl;

    return 0;
}

void zeroSmaller(int& a, int& b) {
    if (a < b) {
        a = 0;
    }
    else {
        b = 0;
    }
}
>>>>>>> Repo2/master
