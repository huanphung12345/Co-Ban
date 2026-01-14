/* 5. Tăng phí thành viên
Một câu lạc bộ, hiện thu phí 2.500 đô la mỗi năm cho các thành viên và đã thông báo
sẽ tăng phí thành viên lên 4% mỗi năm trong 6 năm tới. Viết chương trình sử dụng một
vòng lặp để hiển thị mức phí dự kiến trong 6 năm tới. */
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    const double initialFee = 2500.0;
    const double increaseRate = 0.04; // 4%
    const int years = 6;

    cout << fixed << setprecision(2);
    cout << "Projected membership fees for the next " << years << " years:\n";
    cout << "Year\tFee\n";
    cout << "---------------------\n";

    double fee = initialFee;
    for (int year = 1; year <= years; ++year) {
        fee += fee * increaseRate;
        cout << year << "\t$" << fee << "\n";
    }

    return 0;
}