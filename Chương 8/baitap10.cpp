/* 10. Mảng đảo ngược
Viết một hàm có đối số là 1 mảng các số nguyên và kích thước của mảng. Hàm phải 
tạo một bản sao của mảng, sao cho các giá trị phần tử phải được đảo ngược trong bản 
sao. Hàm sẽ trả về một con trỏ đến mảng mới. Thể hiện hàm để thành 1 chương trình 
hoàn chỉnh. */
#include <iostream>
using namespace std;
int* daoNguocMang(int* arr, int n) {
    // Tạo mảng mới để lưu bản sao đảo ngược
    int* reversedArr = new int[n];
    for (int i = 0; i < n; i++) {
        reversedArr[i] = arr[n - 1 - i]; // Đảo ngược phần tử
    }
    return reversedArr; // Trả về con trỏ đến mảng mới
}
int main() {
    int n;
    cout << "Nhap so luong phan tu trong mang: ";
    cin >> n;

    // Cấp phát động mảng số nguyên
    int* arr = new int[n];

    // Nhập giá trị cho mảng
    cout << "Nhap cac phan tu cua mang:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Phan tu thu " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Đảo ngược mảng
    int* reversedArr = daoNguocMang(arr, n);

    // Hiển thị mảng đã đảo ngược
    cout << "Mang sau khi dao nguoc la:" << endl;
    for (int i = 0; i < n; i++) {
        cout << reversedArr[i] << " ";
    }
    cout << endl;

    // Giải phóng bộ nhớ đã cấp phát
    delete[] arr;
    delete[] reversedArr;

    return 0;
}