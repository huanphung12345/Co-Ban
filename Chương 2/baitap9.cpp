/* 9. Bao nhiêu Calories?
Một túi bánh có 30 chiếc bánh. Thông tin về calorie trên túi ghi rằng 10 khẩu phần 
trong túi và một khẩu phần tương đương với 300 calories. Viết chương trình yêu cầu 
người dùng nhập số lượng bánh mà họ đã ăn, sau đó in ra thông báo tổng số calories 
đã tiêu thụ. */
#include <iostream>
using namespace std;
int main() {
    const int SO_BANH_TRONG_TUI = 30;
    const int SO_KHAU_PHAN_TRONG_TUI = 10;
    const int CALORIES_MOI_KHAU_PHAN = 300;

    int soBanhAn;

    // Nhập số lượng bánh đã ăn
    cout << "Nhap so luong banh da an: ";
    cin >> soBanhAn;

    // Tính số khẩu phần đã ăn
    double soKhauPhanAn = static_cast<double>(soBanhAn) / (SO_BANH_TRONG_TUI / SO_KHAU_PHAN_TRONG_TUI);

    // Tính tổng số calories tiêu thụ
    double tongCalories = soKhauPhanAn * CALORIES_MOI_KHAU_PHAN;

    // Hiển thị kết quả
    cout << "Tong so calories da tieu thu: " << tongCalories << " calories" << endl;

    return 0;
}