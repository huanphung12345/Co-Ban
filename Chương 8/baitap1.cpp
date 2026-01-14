/* 1. Cấp phát mảng (Bắt buộc)
Viết một hàm cấp phát động một mảng số nguyên. Hàm nhận một đối số là số nguyên
cho biết số lượng phần tử cần cấp phát. Hàm sẽ trả về một con trỏ đến mảng */
#include <iostream>
using namespace std;
int* capPhatMang(int n) {
    // Cấp phát động mảng số nguyên với n phần tử
    int* arr = new int[n];
    return arr; // Trả về con trỏ đến mảng
}
int main() {
    int n;
    cout << "Nhap so luong phan tu can cap phat: ";
    cin >> n;

    // Gọi hàm cấp phát mảng
    int* mangSoNguyen = capPhatMang(n);

    // Kiểm tra và sử dụng mảng (ví dụ: nhập giá trị cho các phần tử)
    cout << "Nhap cac phan tu cua mang:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Phan tu " << i + 1 << ": ";
        cin >> mangSoNguyen[i];
    }

    // Hiển thị các phần tử của mảng
    cout << "Cac phan tu trong mang la:" << endl;
    for (int i = 0; i < n; i++) {
        cout << mangSoNguyen[i] << " ";
    }
    cout << endl;

    // Giải phóng bộ nhớ đã cấp phát
    delete[] mangSoNguyen;

    return 0;
}