#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

bool checkIfExist(vector<int>& arr) {
    unordered_set<int> seen;  // Набір для зберігання елементів

    for (int num : arr) {
        // Перевіряємо, чи існує у наборі число, яке є половиною поточного
        if (seen.count(num * 2) || (num % 2 == 0 && seen.count(num / 2))) {
            return true;  // Знайдено пару
        }
        seen.insert(num);  // Додаємо поточний елемент до набору
    }
    
    return false;  // Якщо не знайдено жодної пари
}

int main() {
    vector<int> arr1 = {10, 2, 5, 3};
    vector<int> arr2 = {3, 1, 7, 11};

    cout << "Output for arr1: " << (checkIfExist(arr1) ? "true" : "false") << endl;  // Виведе: true
    cout << "Output for arr2: " << (checkIfExist(arr2) ? "true" : "false") << endl;  // Виведе: false

    return 0;
}
