/* 9. Hàm Trung Vị (Bắt buộc)
Trong thống kê, khi một tập hợp các giá trị được sắp xếp theo thứ tự tăng dần hoặc 
giảm dần, giá trị trung vị của nó là giá trị giữa. Nếu tập hợp gồm chẵn giá trị thì trung 
vị là giá trị trung bình hoặc giá trị trung bình của hai giá trị giữa. Viết một hàm gồm
các đối số như sau:
− Một mảng các số nguyên
− Một số nguyên cho biết số phần tử trong mảng
Trường Đại học Đại Nam Khoa Công nghệ thông tin
Trang | 4
Hàm sẽ xác định trung vị của mảng. Giá trị này được trả về dưới dạng double. (Giả sử
các giá trị trong mảng đã được sắp xếp.) Sử dụng con trỏ thay vì mảng trong bài này */
#include <iostream>
using namespace std;
double timTrungVi(int* arr, int n) {
    if (n % 2 != 0) {
        // Nếu số phần tử là lẻ, trả về phần tử ở giữa
        return static_cast<double>(arr[n / 2]);
    } else {
        // Nếu số phần tử là chẵn, trả về trung bình của hai phần tử ở giữa
        return (static_cast<double>(arr[(n / 2) - 1]) + static_cast<double>(arr[n / 2])) / 2.0;
    }
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

    // Tìm trung vị của mảng
    double median = timTrungVi(arr, n);

    // Hiển thị trung vị
    cout << "Trung vi cua mang la: " << median << endl;

    // Giải phóng bộ nhớ đã cấp phát
    delete[] arr;

    return 0;
}