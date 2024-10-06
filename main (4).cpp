#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int i = m - 1;  // Індекс останнього елемента в nums1
    int j = n - 1;  // Індекс останнього елемента в nums2
    int k = m + n - 1;  // Індекс для вставки в nums1

    // Поки є елементи в обох масивах
    while (i >= 0 && j >= 0) {
        if (nums1[i] > nums2[j]) {
            nums1[k--] = nums1[i--];  // Копіюємо з nums1
        } else {
            nums1[k--] = nums2[j--];  // Копіюємо з nums2
        }
    }

    // Якщо залишилися елементи в nums2, копіюємо їх
    while (j >= 0) {
        nums1[k--] = nums2[j--];
    }
}

int main() {
    vector<int> nums1_1 = {1, 2, 3, 0, 0, 0};
    vector<int> nums2_1 = {2, 5, 6};
    int m1 = 3, n1 = 3;

    merge(nums1_1, m1, nums2_1, n1);

    cout << "Output for nums1_1: ";
    for (int num : nums1_1) {
        cout << num << " ";  // Виведе: 1 2 2 3 5 6
    }
    cout << endl;

    vector<int> nums1_2 = {1};
    vector<int> nums2_2 = {};
    int m2 = 1, n2 = 0;

    merge(nums1_2, m2, nums2_2, n2);

    cout << "Output for nums1_2: ";
    for (int num : nums1_2) {
        cout << num << " ";  // Виведе: 1
    }
    cout << endl;

    vector<int> nums1_3 = {0};
    vector<int> nums2_3 = {1};
    int m3 = 0, n3 = 1;

    merge(nums1_3, m3, nums2_3, n3);

    cout << "Output for nums1_3: ";
    for (int num : nums1_3) {
        cout << num << " ";  // Виведе: 1
    }
    cout << endl;

    return 0;
}
