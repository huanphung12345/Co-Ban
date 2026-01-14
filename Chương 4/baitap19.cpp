/* 19. Phân tích ngân sách:
Viết một chương trình yêu cầu người dùng nhập số tiền mà họ đã lập ngân sách cho
một tháng. Sau đó, một vòng lặp sẽ hỏi người dùng nhập từng chi phí của họ trong
tháng và tổng số tiền hiện có. Khi vòng lặp kết thúc, chương trình sẽ hiển thị số tiền mà
người dùng vượt quá hoặc dư ngân sách. */
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double budget, expense, totalExpenses = 0.0;
    char choice;

    cout << "Nhap so tien ngan sach cho mot thang: ";
    cin >> budget;

    do {
        cout << "Nhap chi phi trong thang: ";
        cin >> expense;
        totalExpenses += expense;

        cout << "Ban co muon nhap them chi phi khong? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    cout << fixed << setprecision(2);
    if (totalExpenses > budget) {
        cout << "Ban da vuot qua ngan sach: " << totalExpenses - budget << " dong." << endl;
    } else {
        cout << "Ban con du ngan sach: " << budget - totalExpenses << " dong." << endl;
    }

    return 0;
}