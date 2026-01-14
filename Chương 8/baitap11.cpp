/* 11. Mở rộng mảng 
Viết một hàm có đối số là một mảng int và kích thước của mảng. Hàm sẽ tạo một mảng 
mới có kích thước gấp đôi kích thước của mảng đối số. Hàm nên sao chép nội dung của 
mảng đối số sang mảng mới và khởi tạo các phần tử chưa sử dụng của mảng thứ hai 
bằng 0. Hàm sẽ trả về một con trỏ đến mảng mới. Thể hiện hàm để thành 1 chương
trình hoàn chỉnh. */
#include <iostream>
using namespace std;
int* moRongMang(int* arr, int n) {
    // Tạo mảng mới có kích thước gấp đôi
    int* expandedArr = new int[n * 2];
    // Sao chép nội dung của mảng cũ sang mảng mới
    for (int i = 0; i < n; i++) {
        expandedArr[i] = arr[i];
    }
    // Khởi tạo các phần tử chưa sử dụng bằng 0
    for (int i = n; i < n * 2; i++) {
        expandedArr[i] = 0;
    }
    return expandedArr; // Trả về con trỏ đến mảng mới
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

    // Mở rộng mảng
    int* expandedArr = moRongMang(arr, n);

    // Hiển thị mảng đã mở rộng
    cout << "Mang sau khi mo rong la:" << endl;
    for (int i = 0; i < n * 2; i++) {
        cout << expandedArr[i] << " ";
    }
    cout << endl;

    // Giải phóng bộ nhớ đã cấp phát
    delete[] arr;
    delete[] expandedArr;

    return 0;
}