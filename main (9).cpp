#include <iostream>
#include <vector>
using namespace std;

vector<int> sortArrayByParity(vector<int>& nums) {
    int left = 0;  // Вказівник для парних чисел
    int right = nums.size() - 1;  // Вказівник для непарних чисел

    while (left < right) {
        // Знаходимо парне число з правої сторони
        while (left < right && nums[left] % 2 == 0) {
            left++;
        }
        // Знаходимо непарне число з лівої сторони
        while (left < right && nums[right] % 2 == 1) {
            right--;
        }
        // Якщо знайшли непарне зліва і парне справа, обмінюємо їх
        if (left < right) {
            swap(nums[left], nums[right]);
        }
    }

    return nums;
}

int main() {
    vector<int> nums1 = {3, 1, 2, 4};
    vector<int> nums2 = {0};

    vector<int> result1 = sortArrayByParity(nums1);
    vector<int> result2 = sortArrayByParity(nums2);

    cout << "Output for nums1: [ ";
    for (int num : result1) {
        cout << num << " ";  // Виведе: парні на початку, потім непарні
    }
    cout << "]" << endl;

    cout << "Output for nums2: [ ";
    for (int num : result2) {
        cout << num << " ";  // Виведе: 0
    }
    cout << "]" << endl;

    return 0;
}
