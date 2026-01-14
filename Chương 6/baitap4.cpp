/* 4. Lớn hơn n (Bắt buộc)
Trong chương trình, hãy viết một hàm chấp nhận ba đối số: một mảng, kích thước của
mảng và một số n. Giả sử mảng chứa các số nguyên. Hàm cần hiển thị tất cả các số
trong mảng lớn hơn số n. */
#include <iostream>
using namespace std;
void displayGreaterThanN(const int arr[], int size, int n) {
    cout << "Cac so lon hon " << n << " trong mang la:" << endl;
    for (int i = 0; i < size; i++) {
        if (arr[i] > n) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}
int main() {
    const int SIZE = 10;
    int arr[SIZE];
    int n;

    // Nhập giá trị vào mảng
    cout << "Nhap " << SIZE << " gia tri vao mang:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "Gia tri thu " << (i + 1) << ": ";
        cin >> arr[i];
    }

    // Nhập số n
    cout << "Nhap so n: ";
    cin >> n;

    // Gọi hàm để hiển thị các số lớn hơn n
    displayGreaterThanN(arr, SIZE, n);

    return 0;
}