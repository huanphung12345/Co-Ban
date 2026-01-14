/* 7. Trường hợp Sửa đổi #2:
Sửa đổi Chương trình 9-19 để mảng arrptr được sắp xếp theo thứ tự giảm dần thay vì 
thứ tự tăng dần. */
#include <iostream>
using namespace std;
void arrSelectSort(int* arr[], int n) {
    // Sắp xếp mảng con trỏ theo thứ tự giảm dần (sử dụng thuật toán sắp xếp chọn)
    for (int i = 0; i < n - 1; i++) {
        int maxIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (*arr[j] > *arr[maxIndex]) {
                maxIndex = j;
            }
        }
        // Đổi chỗ con trỏ
        int* temp = arr[i];
        arr[i] = arr[maxIndex];
        arr[maxIndex] = temp;
    }
}
void showArray(const int arr[], int n) {
    // Hiển thị mảng theo thứ tự ban đầu
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void showArrPtr(int* arr[], int n) {
    // Hiển thị mảng theo thứ tự đã sắp xếp
    for (int i = 0; i < n; i++) {
        cout << *arr[i] << " ";
    }
    cout << endl;
}
int main() {
    int n;
    cout << "Nhap so luong quyen gop: ";
    cin >> n;

    // Cấp phát động mảng quyen gop
    int* donations = new int[n];

    // Nhập giá trị cho mảng quyen gop
    cout << "Nhap cac gia tri quyen gop:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Quyen gop thu " << i + 1 << ": ";
        cin >> donations[i];
    }

    // Tạo mảng con trỏ
    int** arrPtr = new int*[n];
    for (int i = 0; i < n; i++) {
        arrPtr[i] = &donations[i];
    }

    // Sắp xếp mảng con trỏ
    arrSelectSort(arrPtr, n);

    // Hiển thị mảng đã sắp xếp theo thứ tự giảm dần
    cout << "\nCac gia tri quyen gop da sap xep giam dan la: " << endl;
    showArrPtr(arrPtr, n);

    // Hiển thị mảng theo thứ tự ban đầu
    cout << "\nCac gia tri quyen gop, theo thu tu ban dau, la: " << endl;
    showArray(donations, n);

    // Giải phóng bộ nhớ đã cấp phát
    delete[] donations;
    delete[] arrPtr;

    return 0;
}