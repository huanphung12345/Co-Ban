/* 3. Xóa điểm thấp nhất
Sửa Bài toán 2 ở trên sao cho loại bỏ điểm thấp nhất. Điểm này không được tính vào 
điểm trung bình cộng. */
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
    // Tính điểm trung bình, loại bỏ điểm thấp nhất (phần tử đầu tiên sau khi sắp xếp)
    int tong = 0;
    for (int i = 1; i < n; i++) { // Bắt đầu từ 1 để bỏ qua điểm thấp nhất
        tong += arr[i];
    }
    return static_cast<double>(tong) / (n - 1); // Chia cho (n-1) vì đã loại bỏ 1 điểm
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

    // Tính điểm trung bình sau khi loại bỏ điểm thấp nhất
    double diemTrungBinh = tinhDiemTrungBinh(diemBaiKiemTra, n);

    // Hiển thị danh sách điểm đã sắp xếp (bỏ qua điểm thấp nhất)
    cout << "\nDanh sach diem da sap xep tang dan (bo qua diem thap nhat):" << endl;
    for (int i = 1; i < n; i++) { // Bắt đầu từ 1 để bỏ qua điểm thấp nhất
        cout << "Diem thu " << i << ": " << diemBaiKiemTra[i] << endl;
    }

    // Hiển thị điểm trung bình
    cout << "\nDiem trung binh (sau khi loai bo diem thap nhat): " << diemTrungBinh << endl;

    // Giải phóng bộ nhớ đã cấp phát
    delete[] diemBaiKiemTra;

    return 0;
}