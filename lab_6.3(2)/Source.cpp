#include <iostream>
#include <locale>

using namespace std;

void createArray(int arr[], int size, int i = 0) {
    if (i < size) {
        arr[i] = i + 1;
        createArray(arr, size, i + 1);
    }
}

void printArray(int arr[], int size, int i = 0) {
    if (i < size) {
        cout << arr[i] << " ";
        printArray(arr, size, i + 1);
    }
}

template <typename T>
T sumOfSquares(T arr[], int size, int i = 0) {
    if (i < size) {
        return arr[i] * arr[i] + sumOfSquares(arr, size, i + 1);
    }
    return 0;
}
template <typename T>
T checkAndPrintModifiedArray(T arr[], int size, int i = 0) {
    if (i < size) {
        if (arr[i] != (i + 1) * (i + 1)) {
            cout << "Модифкований масив: ";
            printArray(arr, size);
            cout << endl;
            return;
        }
        checkAndPrintModifiedArray(arr, size, i + 1);
    }
}

int main() {
    setlocale(LC_CTYPE, "ukr");
    const int size = 5;
    int arr[size];

    createArray(arr, size);
    cout << "Масив: ";
    printArray(arr, size);

    int sum = sumOfSquares(arr, size);
    cout << endl << "Сума квадратiв елементiв масиву: " << sum << endl;

    checkAndPrintModifiedArray(arr, size);

    return 0;
}
