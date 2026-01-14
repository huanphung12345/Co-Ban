/* 10. Lượng mưa trung bình: (Bắt buộc)
Viết chương trình sử dụng các vòng lặp lồng nhau để thu thập dữ liệu và tính toán lượng
mưa trung bình trong một khoảng thời gian hàng năm. Đầu tiên chương trình nên hỏi
người dùng số năm. Vòng lặp bên ngoài sẽ lặp lại một lần cho mỗi năm. Vòng lặp bên
trong sẽ lặp lại 12 lần, mỗi tháng một lần. Mỗi lần lặp lại của vòng lặp bên trong sẽ hỏi
người dùng về lượng mưa trong tháng đó. Sau tất cả các lần lặp, chương trình sẽ hiển
thị số tháng, tổng lượng mưa và lượng mưa trung bình mỗi tháng trong toàn bộ thời kỳ
Xác thực đầu vào: Không chấp nhận số năm nhỏ hơn 1. Không chấp nhận số âm cho
lượng mưa hàng tháng */
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int years;
    do {
        cout << "Nhap so nam (>=1): ";
        cin >> years;
        if (years < 1) {
            cout << "Loi: So nam phai lon hon hoac bang 1. Vui long nhap lai." << endl;
        }
    } while (years < 1);

    const int monthsInYear = 12;
    double totalRainfall = 0.0;
    int totalMonths = years * monthsInYear;

    for (int year = 1; year <= years; ++year) {
        cout << "Nam " << year << ":" << endl;
        for (int month = 1; month <= monthsInYear; ++month) {
            double monthlyRainfall;
            do {
                cout << " Nhap luong mua thang " << month << " (>=0): ";
                cin >> monthlyRainfall;
                if (monthlyRainfall < 0) {
                    cout << "Loi: Luong mua khong duoc am. Vui long nhap lai." << endl;
                }
            } while (monthlyRainfall < 0);
            totalRainfall += monthlyRainfall;
        }
    }

    double averageRainfall = totalRainfall / totalMonths;

    cout << fixed << setprecision(2);
    cout << "\nTong so thang: " << totalMonths << endl;
    cout << "Tong luong mua: " << totalRainfall << " don vi" << endl;
    cout << "Luong mua trung binh moi thang: " << averageRainfall << " don vi" << endl;

    return 0;
}