/* 12. Sổ điểm
Một giáo viên có năm học sinh và vừa làm bốn bài kiểm tra. Với một học sinh, dựa trên 
điểm trung bình từ bốn bài kiểm tra, giáo viên sẽ sử dụng thang điểm sau để chấm điểm 
dạng chữ cái: 
Viết một chương trình sử dụng một mảng các đối tượng string để chứa tên năm học 
sinh, một mảng năm ký tự để chứa điểm chữ cái của năm học sinh và năm mảng chứa 
bốn số double ứng với tập hợp điểm kiểm tra của năm học sinh. Chương trình sẽ cho 
phép người dùng nhập tên của từng học sinh và lần lượt bốn điểm kiểm tra của họ. Sau 
đó, nó sẽ tính toán và hiển thị điểm kiểm tra trung bình và điểm chữ cái tương ứng của
học sinh đó.
Xác nhận đầu vào: Không chấp nhận điểm kiểm tra nhỏ hơn 0 hoặc lớn hơn 100. */
#include <iostream>
#include <string>
using namespace std;
int main() {
    const int soHocSinh = 5;
    const int soBaiKiemTra = 4;
    string tenHocSinh[soHocSinh];
    char diemChuCai[soHocSinh];
    double diemKiemTra[soHocSinh][soBaiKiemTra];
    double diemTrungBinh[soHocSinh];

    // Nhập tên học sinh và điểm kiểm tra
    for (int i = 0; i < soHocSinh; i++) {
        cout << "Nhap ten hoc sinh thu " << (i + 1) << ": ";
        getline(cin, tenHocSinh[i]);
        double tongDiem = 0.0;
        for (int j = 0; j < soBaiKiemTra; j++) {
            double diem;
            do {
                cout << "Nhap diem kiem tra " << (j + 1) << " cho " << tenHocSinh[i] << ": ";
                cin >> diem;
                if (diem < 0 || diem > 100) {
                    cout << "Diem khong hop le. Vui long nhap lai." << endl;
                }
            } while (diem < 0 || diem > 100);
            diemKiemTra[i][j] = diem;
            tongDiem += diem;
        }
        cin.ignore(); // Xóa ký tự newline còn lại trong bộ đệm
        diemTrungBinh[i] = tongDiem / soBaiKiemTra;

        // Xác định điểm chữ cái
        if (diemTrungBinh[i] >= 90) {
            diemChuCai[i] = 'A';
        } else if (diemTrungBinh[i] >= 80) {
            diemChuCai[i] = 'B';
        } else if (diemTrungBinh[i] >= 70) {
            diemChuCai[i] = 'C';
        } else if (diemTrungBinh[i] >= 60) {
            diemChuCai[i] = 'D';
        } else {
            diemChuCai[i] = 'F';
        }
    }

    // Hiển thị kết quả
    cout << "\nBang diem:\n";
    cout << "----------------------------------------\n";
    cout << "Ten Hoc Sinh\tDDiem TB\tDiem Chu Cai\n";
    cout << "----------------------------------------\n";
    for (int i = 0; i < soHocSinh; i++) {
        cout << tenHocSinh[i] << "\t" << diemTrungBinh[i] << "\t" << diemChuCai[i] << "\n";
    }
    cout << "----------------------------------------\n";

    return 0;
}