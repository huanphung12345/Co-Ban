/* 8. Hàm phân bố:
Trong thống kê, phân bố của một tập hợp các giá trị là giá trị xảy ra thường xuyên nhất 
hoặc với tần suất lớn nhất. Viết một hàm nhận các đối số như sau:
− Một mảng các số nguyên
− Một số nguyên cho biết số phần tử trong mảng
Hàm sẽ xác định phân bố của mảng. Nghĩa là, hàm sẽ xác định giá trị nào trong mảng 
xảy ra thường xuyên nhất. Phân bố là giá trị mà hàm sẽ trả về. Nếu mảng không có 
phân bố (không có giá trị nào xuất hiện nhiều hơn một lần), thì hàm sẽ trả về −1. (Giả
sử mảng sẽ luôn chứa các giá trị không âm.)
Sử dụng con trỏ thay vì mảng trong bài này */
#include <iostream>
using namespace std;
int timPhanBo(int* arr, int n) {
    int maxCount = 0;
    int modeValue = -1;

    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[j] == arr[i]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            modeValue = arr[i];
        }
    }

    // Nếu không có giá trị nào xuất hiện hơn một lần, trả về -1
    if (maxCount <= 1) {
        return -1;
    }

    return modeValue;
}
int main() {
    int n;
    cout << "Nhap so luong phan tu trong mang: ";
    cin >> n;

    // Cấp phát động mảng số nguyên
    int* arr = new int[n];

    // Nhập giá trị cho mảng
    cout << "Nhap cac phan tu cua mang (khong am):" << endl;
    for (int i = 0; i < n; i++) {
        int value;
        do {
            cout << "Phan tu thu " << i + 1 << ": ";
            cin >> value;
            if (value < 0) {
                cout << "Gia tri khong hop le. Vui long nhap lai." << endl;
            }
        } while (value < 0);
        arr[i] = value;
    }

    // Tìm phân bố của mảng
    int mode = timPhanBo(arr, n);

    // Hiển thị kết quả
    if (mode != -1) {
        cout << "Phan bo cua mang la: " << mode << endl;
    } else {
        cout << "Mang khong co phan bo." << endl;
    }

    // Giải phóng bộ nhớ đã cấp phát
    delete[] arr;

    return 0;
}