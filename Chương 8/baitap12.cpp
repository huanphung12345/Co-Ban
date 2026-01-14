/* 12. Dịch chuyển các phần tử
Viết một hàm có đối số là một mảng int và kích thước của mảng. Hàm sẽ tạo một mảng 
mới lớn hơn một phần tử so với mảng đối số. Phần tử đầu tiên của mảng mới phải được 
đặt thành 0. Phần tử 0 của mảng đối số phải được sao chép sang phần tử 1 của mảng 
mới, phần tử 1 của mảng đối số phải được sao chép sang phần tử 2 của mảng mới, v.v. . 
Hàm sẽ trả về một con trỏ đến mảng mới. */
#include <iostream>
using namespace std;
int* dichChuyenPhanTu(int* arr, int n) {
    // Tạo mảng mới có kích thước lớn hơn một phần tử
    int* shiftedArr = new int[n + 1];
    shiftedArr[0] = 0; // Phần tử đầu tiên đặt thành 0
    // Sao chép các phần tử từ mảng cũ sang mảng mới với dịch chuyển
    for (int i = 0; i < n; i++) {
        shiftedArr[i + 1] = arr[i];
    }
    return shiftedArr; // Trả về con trỏ đến mảng mới
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

    // Dịch chuyển các phần tử của mảng
    int* shiftedArr = dichChuyenPhanTu(arr, n);

    // Hiển thị mảng đã dịch chuyển
    cout << "Mang sau khi dich chuyen la:" << endl;
    for (int i = 0; i < n + 1; i++) {
        cout << shiftedArr[i] << " ";
    }
    cout << endl;

    // Giải phóng bộ nhớ đã cấp phát
    delete[] arr;
    delete[] shiftedArr;

    return 0;
}