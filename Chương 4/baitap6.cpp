/* 6. Khoảng cách đi du lịch (Bắt buộc)
Quãng đường xe đi được có thể được tính như sau:
distance = speed * time (khoảng cách = tốc độ * thời gian)
Ví dụ, nếu một chuyến tàu đi 40 dặm một giờ trong 3 giờ, quãng đường đi được là 120 dặm.
Viết một chương trình yêu cầu người dùng cho biết tốc độ của một chiếc xe (số dặm
trên một giờ) và số giờ đã đi. Sau đó, chương trình sẽ sử dụng một vòng lặp để hiển thị
quãng đường xe đã đi trong mỗi giờ của khoảng thời gian đó. Đây là một ví dụ về đầu
ra:
Tốc độ của xe là bao nhiêu dặm trên một giờ? 40
Xe đã đi được bao nhiêu giờ? 3
Khoảng cách theo giờ mà xe đã đi
----------------------------------------------
1 40
2 80
3 120
Xác thực đầu vào: Không chấp nhận số âm cho tốc độ và không chấp nhận bất kỳ giá
trị nào nhỏ hơn 1 cho thời gian di chuyển */
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double speed;
    int hours;

    // Nhập tốc độ với xác thực đầu vào
    do {
        cout << "Toc do cua xe la bao nhieu dặm tren mot gio? ";
        cin >> speed;
        if (speed < 0) {
            cout << "Vui long nhap toc do khong am." << endl;
        }
    } while (speed < 0);

    // Nhập số giờ với xác thực đầu vào
    do {
        cout << "Xe da di duoc bao nhieu gio? ";
        cin >> hours;
        if (hours < 1) {
            cout << "Vui long nhap so gio lon hon hoac bang 1." << endl;
        }
    } while (hours < 1);

    // Hiển thị tiêu đề bảng
    cout << "\nKhoang cach theo gio ma xe da di" << endl;
    cout << "----------------------------------------------" << endl;
    cout << setw(5) << "Gio" << setw(15) << "Khoang cach" << endl;

    // Tính và hiển thị quãng đường cho mỗi giờ
    for (int i = 1; i <= hours; ++i) {
        double distance = speed * i;
        cout << setw(5) << i << setw(15) << distance << endl;
    }

    return 0;
}