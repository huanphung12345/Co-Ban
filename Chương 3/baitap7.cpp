/* 7. Tính giờ (Bắt buộc)
Viết chương trình yêu cầu người dùng nhập vào số giây. Sau đó in ra khoảng thời gian
đó là mấy ngày, giờ, phút, giây.
Chú ý:
− Nếu số ngày bằng không thì không cần in ra số ngày
− Nếu số giờ bằng không thì không cần in ra số giờ
− Nếu số phút bằng không thì không cần in ra số phút
− Nếu số giây bằng không thì không cần in ra số giây */
#include <iostream>
using namespace std;
int main() {
    int total_seconds;
    cout << "Nhap vao so giay: ";
    cin >> total_seconds;

    int days = total_seconds / 86400;
    int hours = (total_seconds % 86400) / 3600;
    int minutes = (total_seconds % 3600) / 60;
    int seconds = total_seconds % 60;

    cout << "Khoang thoi gian la: ";
    bool printed = false;

    if (days > 0) {
        cout << days << " ngay ";
        printed = true;
    }
    if (hours > 0) {
        cout << hours << " gio ";
        printed = true;
    }
    if (minutes > 0) {
        cout << minutes << " phut ";
        printed = true;
    }
    if (seconds > 0 || !printed) { // Always print seconds if nothing else was printed
        cout << seconds << " giay";
    }

    cout << endl;
    return 0;
}