#include <iostream>
#include <vector>
using namespace std;

int maxConsecutiveOnes(const vector<int>& nums) {
    int maxCount = 0;  // Змінна для зберігання максимального числа 1-ць
    int currentCount = 0;  // Змінна для підрахунку поточних 1-ць

    for (int num : nums) {
        if (num == 1) {
            currentCount++;  // Збільшуємо поточний рахунок, якщо 1
        } else {
            maxCount = max(maxCount, currentCount);  // Оновлюємо максимальний рахунок
            currentCount = 0;  // Скидаємо поточний рахунок
        }
    }

    // Перевіряємо ще раз в кінці масиву
    maxCount = max(maxCount, currentCount);

    return maxCount;  // Повертаємо максимальну кількість 1-ць
}

int main() {
    vector<int> nums1 = {1, 1, 0, 1, 1, 1};
    vector<int> nums2 = {1, 0, 1, 1, 0, 1};

    cout << "Max consecutive ones in nums1: " << maxConsecutiveOnes(nums1) << endl;  // Виведе 3
    cout << "Max consecutive ones in nums2: " << maxConsecutiveOnes(nums2) << endl;  // Виведе 2

    return 0;
}
