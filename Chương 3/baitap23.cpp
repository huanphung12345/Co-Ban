/* 24. Cuộc gọi đường dài
Một nhà cung cấp dịch vụ đường dài cho các cuộc gọi điện thoại:
Thời gian gọi Tiền trên 1 phút (cent)
00:00-06 :59 0.05
07 :00-19 :00 0.45
19 :01-23 :59 0.20
Viết chương trình yêu cầu thời gian bắt đầu và số phút của cuộc gọi, đồng thời hiển thị
cước phí. Chương trình sẽ yêu cầu thời gian được nhập dưới dạng số dấu chấm động ở
dạng HH.MM. Ví dụ: 07:00 giờ sẽ được nhập là 07.00 và 16:28 giờ sẽ được nhập là
16.28.
Xác thực đầu vào: Chương trình không chấp nhận thời gian lớn hơn 23:59. Ngoài ra,
không có số nào có hai chữ số cuối cùng lớn hơn 59 sẽ được chấp nhận. Gợi ý: Giả sử
num là một biến dấu phẩy động, biểu thức sau sẽ cung cấp cho bạn phần phân số của
nó: num - static_cast <int> (num) */
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double startTime;
    int duration;
    cout << "Nhap thoi gian bat dau (HH.MM): ";
    cin >> startTime;
    cout << "Nhap so phut goi: ";
    cin >> duration;

    int hours = static_cast<int>(startTime);
    int minutes = static_cast<int>((startTime - hours) * 100);

    // Kiem tra tinh hop le cua thoi gian
    if (hours < 0 || hours > 23 || minutes < 0 || minutes > 59) {
        cout << "Thoi gian khong hop le!" << endl;
        return 1;
    }

    double totalCost = 0.0;
    double rate;

    // Xac dinh muc gia theo thoi gian bat dau
    if (hours < 7) {
        rate = 0.05; // 00:00-06:59
    } else if (hours < 19 || (hours == 19 && minutes == 0)) {
        rate = 0.45; // 07:00-19:00
    } else {
        rate = 0.20; // 19:01-23:59
    }

    totalCost = rate * duration;

    cout << fixed << setprecision(2);
    cout << "Cuoc phi goi la: " << totalCost << " cent" << endl;

    return 0;
}