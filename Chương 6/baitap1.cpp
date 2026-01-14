/* 1. Giá trị mảng lớn nhất / nhỏ nhất
Viết chương trình cho phép người dùng nhập mười giá trị vào một mảng. Sau đó,
chương trình sẽ hiển thị các giá trị lớn nhất và nhỏ nhất được lưu trữ trong mảng. */
#include <iostream>
using namespace std;
int main() {
    const int SIZE = 10;
    int arr[SIZE];
    int maxVal, minVal;

    // Nhập giá trị vào mảng
    cout << "Nhap " << SIZE << " gia tri vao mang:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "Gia tri thu " << (i + 1) << ": ";
        cin >> arr[i];
    }

    // Khởi tạo giá trị lớn nhất và nhỏ nhất
    maxVal = arr[0];
    minVal = arr[0];

    // Tìm giá trị lớn nhất và nhỏ nhất
    for (int i = 1; i < SIZE; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
    }

    // Hiển thị kết quả
    cout << "Gia tri lon nhat trong mang: " << maxVal << endl;
    cout << "Gia tri nho nhat trong mang: " << minVal << endl;

    return 0;
}