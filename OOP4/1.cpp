#include <iostream>
using namespace std;

int maxint(const int*, int); 
int main() {
    setlocale(LC_ALL, "rus");

    int N, max;
    cout << "Введите количество элементов: ";
    cin >> N;
    cout << "Введите " << N << " целых чисел: ";
    int* arr = new int[N];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    max = maxint(arr, N);
    cout << "Наибольшее число: " << arr[max] << " Индекс: " << max << endl;

    delete[] arr;
    return 0;
}
int maxint(const int* arr, int N) {
    int max = 0; 
    for (int i = 1; i < N; i++) { 
        if (arr[i] > arr[max]) { 
            max = i; 
        }
    }
    return max; 
} 
