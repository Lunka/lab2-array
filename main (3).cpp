#include <iostream>
#include <vector>
using namespace std;

void duplicateZeros(vector<int>& arr) {
    int n = arr.size();
    int countZeros = 0;

    // Підраховуємо кількість нулів
    for (int num : arr) {
        if (num == 0) {
            countZeros++;
        }
    }

    // Проходимо масив з кінця до початку
    for (int i = n - 1, j = n - 1; i >= 0; i--) {
        if (arr[i] == 0) {
            if (j < n) arr[j--] = 0;  // Додаємо перший нуль
            if (j < n) arr[j--] = 0;  // Додаємо дубльований нуль
        } else {
            if (j < n) arr[j--] = arr[i];  // Копіюємо значення в нову позицію
        }
    }
}

int main() {
    vector<int> arr1 = {1, 0, 2, 3, 0, 4, 5, 0};
    vector<int> arr2 = {1, 2, 3};

    duplicateZeros(arr1);
    duplicateZeros(arr2);

    cout << "Output for arr1: ";
    for (int num : arr1) {
        cout << num << " ";  // Виведе: 1 0 0 2 3 0 0 4
    }
    cout << endl;

    cout << "Output for arr2: ";
    for (int num : arr2) {
        cout << num << " ";  // Виведе: 1 2 3
    }
    cout << endl;

    return 0;
}
