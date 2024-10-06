#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    if (nums.empty()) return 0;  // Якщо масив пустий, повертаємо 0

    int k = 1;  // Лічильник унікальних елементів, починаємо з 1, оскільки перший елемент завжди унікальний

    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] != nums[k - 1]) {  // Якщо поточний елемент не дорівнює останньому унікальному
            nums[k] = nums[i];         // Додаємо його до масиву
            k++;                        // Збільшуємо лічильник унікальних елементів
        }
    }

    return k;  // Повертаємо кількість унікальних елементів
}

int main() {
    vector<int> nums1 = {1, 1, 2};
    vector<int> nums2 = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};

    int k1 = removeDuplicates(nums1);
    int k2 = removeDuplicates(nums2);

    cout << "Output for nums1: " << k1 << ", nums1 = [ ";
    for (int i = 0; i < k1; i++) {
        cout << nums1[i] << " ";  // Виведе: 1 2
    }
    cout << "]" << endl;

    cout << "Output for nums2: " << k2 << ", nums2 = [ ";
    for (int i = 0; i < k2; i++) {
        cout << nums2[i] << " ";  // Виведе: 0 1 2 3 4
    }
    cout << "]" << endl;

    return 0;
}
