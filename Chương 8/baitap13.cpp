/* 13. Film Thống kê (Bắt buộc)
Viết một chương trình có thể được sử dụng để thu thập dữ liệu thống kê về số lượng phim 
mà sinh viên đại học xem trong một tháng. Chương trình sẽ thực hiện các bước sau:
1. Hỏi người dùng có bao nhiêu sinh viên được khảo sát. Sau đó, một mảng các số
nguyên có nhiều phần tử này sẽ được cấp phát động.
2. Cho phép người dùng nhập số lượng phim mà mỗi học sinh đã xem vào mảng.
3. Tính toán và hiển thị giá trị trung bình, trung vị và phân bố của các giá trị đã 
nhập. (Sử dụng các hàm bạn đã viết trong bài 8 và 9 để tính giá trị trung bình và 
phân bố.)
Xác thực đầu vào: Không chấp nhận số âm cho đầu vào */
#include <iostream>
using namespace std;
double tinhTrungBinh(int* arr, int n) {
    int tong = 0;
    for (int i = 0; i < n; i++) {
        tong += arr[i];
    }
    return static_cast<double>(tong) / n;
}
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
double timTrungVi(int* arr, int n) {
    // Sắp xếp mảng để tìm trung vị
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    if (n % 2 != 0) {
        return static_cast<double>(arr[n / 2]);
    } else {
        return (static_cast<double>(arr[(n / 2) - 1]) + static_cast<double>(arr[n / 2])) / 2.0;
    }
}
int main() {
    int n;
    cout << "Nhap so luong sinh vien duoc khao sat: ";
    cin >> n;

    // Cấp phát động mảng số nguyên
    int* soLuongPhim = new int[n];

    // Nhập số lượng phim đã xem với xác thực đầu vào
    for (int i = 0; i < n; i++) {
        int soPhim;
        do {
            cout << "Nhap so luong phim ma sinh vien thu " << i + 1 << " da xem (khong am): ";
            cin >> soPhim;
            if (soPhim < 0) {
                cout << "So luong phim khong hop le. Vui long nhap lai." << endl;
            }
        } while (soPhim < 0);
        soLuongPhim[i] = soPhim;
    }

    // Tính toán các giá trị thống kê
    double trungBinh = tinhTrungBinh(soLuongPhim, n);
    double trungVi = timTrungVi(soLuongPhim, n);
    int phanBo = timPhanBo(soLuongPhim, n);

    // Hiển thị kết quả
    cout << "\nGia tri thong ke:" << endl;
    cout << "Trung binh so luong phim da xem: " << trungBinh << endl;
    cout << "Trung vi so luong phim da xem: " << trungVi << endl;
    if (phanBo != -1) {
        cout << "Phan bo so luong phim da xem: " << phanBo << endl;
    } else {
        cout << "Khong co phan bo trong du lieu." << endl;
    }

    // Giải phóng bộ nhớ đã cấp phát
    delete[] soLuongPhim;

    return 0;
}