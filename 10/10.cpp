#include <iostream>
using namespace std;

<<<<<<< HEAD
struct sterling {
    int funt;   
    int shillings; 
    int pence;     
};

int main() {
    setlocale(LC_ALL, "rus"); 
    double des;  
    sterling oldMoney;     
    cout << "Введите сумму в десятичных фунтах: ";
    cin >> des;


    oldMoney.funt = int(des);  
    double remaining = des - oldMoney.funt; 
    oldMoney.shillings = int(remaining * 20);
    remaining = (remaining * 20) - oldMoney.shillings;  
    oldMoney.pence = int(remaining * 12);
    cout << "Сумма в старой системе: " << oldMoney.funt << " фунтов, "
        << oldMoney.shillings << " шиллингов, " << oldMoney.pence << " пенсов." << endl;

    return 0;
}
=======
void countCalls();

int main() {
    setlocale(LC_ALL, "rus"); 
    for (int i = 0; i < 10; i++) {
        countCalls(); 
    }
    return 0;
}
void countCalls() {
    static int count = 0;
    count++;
    cout << "Функция вызвана " << count << " раз(а)." << endl;
}
>>>>>>> Repo2/master
