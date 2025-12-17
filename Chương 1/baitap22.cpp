/* 19. Nhiệt độ cao hàng năm
Nhiệt độ cao trung bình tháng 7 là 85 độ F ở New York City, 88 độ F ở Denver, và 
106 độ F ở Phoenix. Viết chương trình tính toán và báo cáo nhiệt độ trung bình mới 
trong tháng 7 của các thành phố nếu nhiệt độ ở mỗi thành phố tăng lên 2%. */
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    const double ny_temp = 85.0;
    const double denver_temp = 88.0;
    const double phoenix_temp = 106.0;
    const double increase_rate = 0.02;

    double new_ny_temp = ny_temp * (1 + increase_rate);
    double new_denver_temp = denver_temp * (1 + increase_rate);
    double new_phoenix_temp = phoenix_temp * (1 + increase_rate);

    cout << fixed << setprecision(2);
    cout << "Nhiệt độ trung bình mới trong tháng 7:" << endl;
    cout << "New York City: " << new_ny_temp << " độ F" << endl;
    cout << "Denver: " << new_denver_temp << " độ F" << endl;
    cout << "Phoenix: " << new_phoenix_temp << " độ F" << endl;

    return 0;
}