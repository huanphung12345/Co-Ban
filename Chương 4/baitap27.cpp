/* 27. Các bước trung bình đã thực hiện:
Máy theo dõi thể dục cá nhân là một thiết bị đeo được để theo dõi hoạt động thể chất của bạn,
lượng calo đốt cháy, nhịp tim, kiểu ngủ, v.v. Một hoạt động thể chất phổ biến mà hầu hết các
thiết bị này theo dõi là số bước bạn thực hiện mỗi ngày.
Các bạn có thể lấy tệp Steps.txt trong tệp đính kèm trên trang elearning của bài tập. Có
365 dòng trong tệp và mỗi dòng chứa số bước được thực hiện trong một ngày. (Dòng đầu tiên
là số bước được thực hiện vào ngày 1 tháng 1, dòng thứ hai là số bước được thực hiện vào
ngày 2 tháng 1, v.v.). Viết chương trình đọc tệp, sau đó hiển thị số bước trung bình được thực
hiện cho mỗi tháng. (Dữ liệu từ một năm không phải là năm nhuận, vì vậy tháng Hai có 28
ngày.) */
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
const int DAYS_IN_MONTHS[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
int main() {
    ifstream inputFile("Steps.txt");
    if (!inputFile) {
        cerr << "Không thể mở tệp Steps.txt" << endl;
        return 1;
    }

    int steps;
    for (int month = 0; month < 12; ++month) {
        int totalSteps = 0;
        for (int day = 0; day < DAYS_IN_MONTHS[month]; ++day) {
            inputFile >> steps;
            totalSteps += steps;
        }
        double averageSteps = static_cast<double>(totalSteps) / DAYS_IN_MONTHS[month];
        cout << "Tháng " << (month + 1) << ": Số bước trung bình = "
             << fixed << setprecision(2) << averageSteps << endl;
    }

    inputFile.close();
    return 0;
}