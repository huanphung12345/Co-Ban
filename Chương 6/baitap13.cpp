/* 13. Sổ điểm nâng cấp
Sửa đổi ứng dụng sổ điểm trong bài trên thành tự động loại bỏ điểm thấp nhất khi đang 
tính điểm trung bình kiểm tra và điểm chữ cái (VD sinh viên có 4 điểm 9.5; 7; 8.2; 3 
thì chỉ tính điểm trung bình từ 9.5; 7; 8.2) */
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Nhap so luong diem kiem tra: ";
    cin >> n;
    float diem[n];
    for (int i = 0; i < n; i++) {
        cout << "Nhap diem kiem tra thu " << i + 1 << ": ";
        cin >> diem[i];
    }

    // Tim diem thap nhat
    float diemThapNhat = diem[0];
    for (int i = 1; i < n; i++) {
        if (diem[i] < diemThapNhat) {
            diemThapNhat = diem[i];
        }
    }

    // Tinh tong diem sau khi loai bo diem thap nhat
    float tongDiem = 0;
    for (int i = 0; i < n; i++) {
        if (diem[i] != diemThapNhat) {
            tongDiem += diem[i];
        }
    }

    // Tinh diem trung binh
    float diemTrungBinh = tongDiem / (n - 1);
    cout << "Diem trung binh sau khi loai bo diem thap nhat: " << diemTrungBinh << endl;

    // Xac dinh diem chu cai
    char diemChu;
    if (diemTrungBinh >= 9.0) {
        diemChu = 'A';
    } else if (diemTrungBinh >= 8.0) {
        diemChu = 'B';
    } else if (diemTrungBinh >= 7.0) {
        diemChu = 'C';
    } else if (diemTrungBinh >= 6.0) {
        diemChu = 'D';
    } else {
        diemChu = 'F';
    }
    cout << "Diem chu cai: " << diemChu << endl;

    return 0;
}