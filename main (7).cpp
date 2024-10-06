#include <iostream>
#include <vector>
using namespace std;

bool validMountainArray(vector<int>& arr) {
    int n = arr.size();
    
    // Перевірка, чи довжина масиву не менша 3
    if (n < 3) return false;

    int i = 0;

    // Зростання
    while (i + 1 < n && arr[i] < arr[i + 1]) {
        i++;
    }

    // Перевірка, чи не досягли піку на початку або в кінці масиву
    if (i == 0 || i == n - 1) return false;

    // Спадання
    while (i + 1 < n && arr[i] > arr[i + 1]) {
        i++;
    }

    // Якщо досягли кінця масиву, це дійсний гірський масив
    return i == n - 1;
}

int main() {
    vector<int> arr1 = {2, 1};
    vector<int> arr2 = {3, 5, 5};
    vector<int> arr3 = {0, 3, 2, 1};

    cout << "Output for arr1: " << (validMountainArray(arr1) ? "true" : "false") << endl;  // Виведе: false
    cout << "Output for arr2: " << (validMountainArray(arr2) ? "true" : "false") << endl;  // Виведе: false
    cout << "Output for arr3: " << (validMountainArray(arr3) ? "true" : "false") << endl;  // Виведе: true

    return 0;
}
