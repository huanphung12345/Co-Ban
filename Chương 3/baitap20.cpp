/* 21. Tốc độ âm thanh trong khí
Khi âm thanh truyền qua chất khí, tốc độ của nó phụ thuộc chủ yếu vào mật độ của môi
trường. Môi trường càng ít đặc thì tốc độ sẽ càng nhanh. Bảng sau đây cho thấy tốc độ
gần đúng của âm thanh ở 0 độ C, được đo bằng mét trên giây, khi di chuyển qua carbon
dioxide, không khí, helium và hydro.
Loại khí Tốc độ (m/s)
Carbon Dioxide 258.0
Không khí 331.5
Helium 972.2
Hydro 1,270.0
Viết chương trình hiển thị menu cho phép người dùng chọn một trong bốn loại khí này.
Sau khi lựa chọn được thực hiện, người dùng nên nhập số giây cần thiết để âm thanh di
chuyển trong loại khí này từ nguồn của nó đến vị trí mà nó được phát hiện. Sau đó,
chương trình sẽ báo cáo khoảng cách (tính bằng mét) nguồn phát âm thanh từ vị trí phát
hiện.
Xác thực đầu vào: Kiểm tra xem người dùng đã chọn một trong các lựa chọn menu có
đúng hay chưa. Không chấp nhận thời gian ít hơn 0 giây hoặc hơn 30 giây. */
#include <iostream>
using namespace std;
int main() {
    const double SPEED_CO2 = 258.0;
    const double SPEED_AIR = 331.5;
    const double SPEED_HELIUM = 972.2;
    const double SPEED_HYDROGEN = 1270.0;

    int choice;
    double time, distance;

    cout << "Chon loai khi:\n";
    cout << "1. Carbon Dioxide\n";
    cout << "2. Khong khi\n";
    cout << "3. Helium\n";
    cout << "4. Hydro\n";
    cout << "Nhap lua chon (1-4): ";
    cin >> choice;

    if (choice < 1 || choice > 4) {
        cout << "Lua chon khong hop le. Vui long chon so tu 1 den 4.\n";
        return 1;
    }

    cout << "Nhap thoi gian (giay) (0-30): ";
    cin >> time;

    if (time < 0 || time > 30) {
        cout << "Thoi gian khong hop le. Vui long nhap gia tri tu 0 den 30 giay.\n";
        return 1;
    }

    switch (choice) {
        case 1:
            distance = SPEED_CO2 * time;
            break;
        case 2:
            distance = SPEED_AIR * time;
            break;
        case 3:
            distance = SPEED_HELIUM * time;
            break;
        case 4:
            distance = SPEED_HYDROGEN * time;
            break;
    }

    cout << "Khoang cach tu nguon den vi tri phat hien: " << distance << " met\n";

    return 0;
}