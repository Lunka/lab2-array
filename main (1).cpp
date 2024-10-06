#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int countNumbersWithEvenDigits(const vector<int>& nums) {
    int count = 0;  // Змінна для зберігання кількості чисел з парною кількістю цифр

    for (int num : nums) {
        int digitCount = to_string(num).length();  // Отримуємо кількість цифр у числі
        if (digitCount % 2 == 0) {  // Перевіряємо, чи кількість цифр парна
            count++;  // Збільшуємо лічильник
        }
    }

    return count;  // Повертаємо кількість чисел з парною кількістю цифр
}

int main() {
    vector<int> nums1 = {12, 345, 2, 6, 7896};
    vector<int> nums2 = {555, 901, 482, 1771};

    cout << "Count of numbers with even digits in nums1: " << countNumbersWithEvenDigits(nums1) << endl;  // Виведе 2
    cout << "Count of numbers with even digits in nums2: " << countNumbersWithEvenDigits(nums2) << endl;  // Виведе 1

    return 0;
}
