#include <iostream>
#include <vector>
using namespace std;

vector<int> sortedSquares(const vector<int>& nums) {
    int n = nums.size();
    vector<int> squares(n);
    int left = 0;          // Вказівник на початок масиву
    int right = n - 1;     // Вказівник на кінець масиву
    int index = n - 1;     // Індекс для заповнення нового масиву з квадратами

    while (left <= right) {
        int leftSquare = nums[left] * nums[left];   // Квадрат лівого елемента
        int rightSquare = nums[right] * nums[right]; // Квадрат правого елемента

        if (leftSquare > rightSquare) {
            squares[index--] = leftSquare;  // Якщо квадрат лівого елемента більший, додаємо його
            left++;                          // Зсув вліво
        } else {
            squares[index--] = rightSquare; // Якщо квадрат правого елемента більший або рівний, додаємо його
            right--;                         // Зсув вправо
        }
    }

    return squares;  // Повертаємо масив квадратів у відсортованому порядку
}

int main() {
    vector<int> nums1 = {-4, -1, 0, 3, 10};
    vector<int> nums2 = {-7, -3, 2, 3, 11};

    vector<int> result1 = sortedSquares(nums1);
    vector<int> result2 = sortedSquares(nums2);

    cout << "Sorted squares of nums1: ";
    for (int num : result1) {
        cout << num << " ";  // Виведе: 0 1 9 16 100
    }
    cout << endl;

    cout << "Sorted squares of nums2: ";
    for (int num : result2) {
        cout << num << " ";  // Виведе: 4 9 9 49 121
    }
    cout << endl;

    return 0;
}
