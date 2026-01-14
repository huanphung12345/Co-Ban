/* 20. Tốc độ âm thanh
Bảng sau đây cho thấy tốc độ gần đúng của âm thanh trong không khí, nước và thép.
Môi trường Tốc độ
Không khí 1.100 feet/giây
Nước 4.900 feet/giây
Thép 16.400 feet/giây
Viết chương trình hiển thị menu cho phép người dùng chọn: không khí, nước hoặc thép.
Sau khi người dùng thực hiện lựa chọn, sẽ được yêu cầu nhập khoảng cách mà sóng âm
thanh sẽ truyền trong môi trường đã chọn. Sau đó, chương trình sẽ hiển thị khoảng thời
gian cần thiết. (Làm tròn câu trả lời đến bốn chữ số thập phân.)
Xác thực đầu vào: Kiểm tra xem người dùng đã chọn một trong các lựa chọn có sẵn từ
menu chưa ? Không chấp nhận khoảng cách nhỏ hơn 0. */
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    const double SPEED_AIR = 1100.0;   // feet per second
    const double SPEED_WATER = 4900.0; // feet per second
    const double SPEED_STEEL = 16400.0; // feet per second

    int choice;
    double distance, time;

    cout << "Select the medium through which sound will travel:\n";
    cout << "1. Air\n";
    cout << "2. Water\n";
    cout << "3. Steel\n";
    cout << "Enter your choice (1-3): ";
    cin >> choice;

    if (choice < 1 || choice > 3) {
        cout << "Invalid choice. Please select a valid option from the menu." << endl;
        return 1;
    }

    cout << "Enter the distance (in feet) that sound will travel: ";
    cin >> distance;

    if (distance < 0) {
        cout << "Distance cannot be negative. Please enter a valid distance." << endl;
        return 1;
    }

    switch (choice) {
        case 1:
            time = distance / SPEED_AIR;
            break;
        case 2:
            time = distance / SPEED_WATER;
            break;
        case 3:
            time = distance / SPEED_STEEL;
            break;
    }

    cout << fixed << setprecision(4);
    cout << "Time taken for sound to travel " << distance << " feet: " << time << " seconds." << endl;

    return 0;
}