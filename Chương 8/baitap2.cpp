/* 2. Điểm Kiểm tra # 1 (Bắt buộc)
Viết chương trình cấp phát động một mảng lớn đủ để chứa một số điểm bài kiểm tra do 
người dùng nhập. Một khi tất cả điểm số được nhập, có một hàm sắp xếp mảng theo 
thứ tự tăng dần. Một hàm khác là tính điểm trung bình. Các chương trình sẽ hiển thị
danh sách điểm đã được sắp xếp và điểm trung bình, phía trên mỗi đầu điểm có tiêu đề
thích hợp. Sử dụng con trỏ thay vì mảng bất cứ khi nào có thể.
Xác thực đầu vào: Điểm số không chấp nhận số âm. */
#include <iostream>
using namespace std;
void sapXepTangDan(int* arr, int n) {
    // Sắp xếp mảng theo thứ tự tăng dần (sử dụng thuật toán sắp xếp nổi bọt)
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Đổi chỗ
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
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
    cout << "Nhap so luong diem bai kiem tra: ";
    cin >> n;

    // Cấp phát động mảng điểm số
    int* diemBaiKiemTra = new int[n];

    // Nhập điểm số với xác thực đầu vào
    for (int i = 0; i < n; i++) {
        int diem;
        do {
            cout << "Nhap diem bai kiem tra thu " << i + 1 << " (khong am): ";
            cin >> diem;
            if (diem < 0) {
                cout << "Diem khong hop le. Vui long nhap lai." << endl;
            }
        } while (diem < 0);
        diemBaiKiemTra[i] = diem;
    }

    // Sắp xếp điểm số theo thứ tự tăng dần
    sapXepTangDan(diemBaiKiemTra, n);

    // Tính điểm trung bình
    double diemTrungBinh = tinhDiemTrungBinh(diemBaiKiemTra, n);

    // Hiển thị danh sách điểm đã sắp xếp
    cout << "\nDanh sach diem da sap xep tang dan:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Diem thu " << i + 1 << ": " << diemBaiKiemTra[i] << endl;
    }

    // Hiển thị điểm trung bình
    cout << "\nDiem trung binh: " << diemTrungBinh << endl;

    // Giải phóng bộ nhớ đã cấp phát
    delete[] diemBaiKiemTra;

    return 0;
}