#include <iostream>
#include <vector>
using namespace std;

vector<int> replaceElements(vector<int>& arr) {
    int n = arr.size();
    if (n == 1) {
        arr[0] = -1; // Заміна єдиного елемента на -1
        return arr;
    }

    int max_from_right = arr[n - 1]; // Останній елемент
    arr[n - 1] = -1; // Заміна останнього елемента на -1

    // Проходимо масив з правого краю до лівого
    for (int i = n - 2; i >= 0; i--) {
        int current = arr[i]; // Запам'ятовуємо поточний елемент
        arr[i] = max_from_right; // Заміна поточного елемента на найбільший з правих
        // Оновлюємо max_from_right, якщо поточний елемент більший
        if (current > max_from_right) {
            max_from_right = current;
        }
    }

    return arr;
}

int main() {
    vector<int> arr1 = {17, 18, 5, 4, 6, 1};
    vector<int> arr2 = {400};

    vector<int> result1 = replaceElements(arr1);
    vector<int> result2 = replaceElements(arr2);

    cout << "Output for arr1: [ ";
    for (int num : result1) {
        cout << num << " ";  // Виведе: 18 6 6 6 1 -1
    }
    cout << "]" << endl;

    cout << "Output for arr2: [ ";
    for (int num : result2) {
        cout << num << " ";  // Виведе: -1
    }
    cout << "]" << endl;

    return 0;
}
