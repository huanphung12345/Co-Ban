/* 4. Lượng calo bị đốt cháy (Bắt buộc)
Chạy trên một máy chạy bộ cụ thể, bạn đốt cháy 3,6 calo mỗi phút. Viết chương trình sử
dụng vòng lặp để hiển thị số calo đã đốt cháy sau 5, 10, 15, 20, 25 và 30 phút */
#include <iostream>
using namespace std;
int main() {
    const double caloriesPerMinute = 3.6;
    cout << "Thoi gian (phut)\tCalo da dot chay\n";
    for (int minutes = 5; minutes <= 30; minutes += 5) {
        double caloriesBurned = minutes * caloriesPerMinute;
        cout << minutes << "\t\t\t" << caloriesBurned << endl;
    }
    return 0;
}