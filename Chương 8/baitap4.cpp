/* 4. Điểm Kiểm tra # 2 (Bắt buộc)
Sửa đổi bài 2 để cho phép người dùng nhập vào các cặp tên - điểm. Với mỗi sinh viên 
làm bài kiểm tra, người dùng nhập tên của sinh viên và điểm kiểm tra dưới định dạng 
số nguyên. Sửa đổi chức năng sắp xếp để có một mảng chứa tên học sinh, và một mảng 
chứa điểm kiểm tra của học sinh. Khi danh sách được sắp xếp được hiển thị thì tên của 
sinh viên cũng được hiển thị tương ứng. Sử dụng con trỏ thay vì sử dụng mảng */
#include <iostream>
#include <string>
using namespace std;
void sapXepTangDan(int* arrDiem, string* arrTen, int n) {
    // Sắp xếp mảng điểm và tên theo thứ tự tăng dần của điểm (sử dụng thuật toán sắp xếp nổi bọt)
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arrDiem[j] > arrDiem[j + 1]) {
                // Đổi chỗ điểm
                int tempDiem = arrDiem[j];
                arrDiem[j] = arrDiem[j + 1];
                arrDiem[j + 1] = tempDiem;
                // Đổi chỗ tên tương ứng
                string tempTen = arrTen[j];
                arrTen[j] = arrTen[j + 1];
                arrTen[j + 1] = tempTen;
            }
        }
    }
}
double tinhDiemTrungBinh(int* arr, int n) {
    // Tính điểm trung bình
    int tong = 0;
    for (int i = 0; i < n; i++) {
        tong += arr[i];
    }
    return static_cast<double>(tong) / n;
}
int main() {
    int n;
    cout << "Nhap so luong sinh vien lam bai kiem tra: ";
    cin >> n;
    cin.ignore(); // Xóa ký tự newline còn lại trong bộ đệm
    // Cấp phát động mảng tên và điểm số
    string* tenSinhVien = new string[n];
    int* diemBaiKiemTra = new int[n];
    // Nhập tên và điểm số với xác thực đầu vào
    for (int i = 0; i < n; i++) {
        cout << "Nhap ten sinh vien thu " << i + 1 << ": ";
        getline(cin, tenSinhVien[i]);
        int diem;
        do {
            cout << "Nhap diem bai kiem tra cua " << tenSinhVien[i] << " (khong am): ";
            cin >> diem;
            if (diem < 0) {
                cout << "Diem khong hop le. Vui long nhap lai." << endl;
            }
        } while (diem < 0);
        diemBaiKiemTra[i] = diem;
        cin.ignore(); // Xóa ký tự newline còn lại trong bộ đệm
    }
    // Sắp xếp điểm số và tên theo thứ tự tăng dần của điểm
    sapXepTangDan(diemBaiKiemTra, tenSinhVien, n);
    // Tính điểm trung bình
    double diemTrungBinh = tinhDiemTrungBinh(diemBaiKiemTra, n);
    // Hiển thị danh sách điểm đã sắp xếp cùng với tên sinh viên
    cout << "\nDanh sach sinh vien va diem da sap xep tang dan:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Sinh vien: " << tenSinhVien[i] << " - Diem: " << diemBaiKiemTra[i] << endl;
    }
    // Hiển thị điểm trung bình
    cout << "\nDiem trung binh: " << diemTrungBinh << endl;
    // Giải phóng bộ nhớ đã cấp phát
    delete[] tenSinhVien;
    delete[] diemBaiKiemTra;
    return 0;
}