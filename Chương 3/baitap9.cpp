/* 9. Trò chơi đổi 1 Đô la
Viết chương trình yêu cầu người người dùng nhập 4 số tương ứng số cent (1 đô la bằng
100 cent), nickel (bằng 5 cent), dime (bằng 10 cent), quarter (bằng 35 cent) để khi cộng
lại thì được 1 đô la. Nếu cộng lại vừa đúng 1 đô la thì thông báo người chơi thắng, nếu
không phải thì thông báo kết quả lớn hơn hay nhỏ hơn 1 đô la. */
#include <iostream>
using namespace std;
int main() {
    const int ONE_DOLLAR = 100;
    int cent, nickel, dime, quarter;
    cout << "Nhap so cent (1 cent = 1): ";
    cin >> cent;
    cout << "Nhap so nickel (1 nickel = 5 cent): ";
    cin >> nickel;
    cout << "Nhap so dime (1 dime = 10 cent): ";
    cin >> dime;
    cout << "Nhap so quarter (1 quarter = 25 cent): ";
    cin >> quarter;

    int total = cent * 1 + nickel * 5 + dime * 10 + quarter * 25;

    if (total == ONE_DOLLAR) {
        cout << "Chuc mung! Ban da thang tro choi!" << endl;
    } else if (total < ONE_DOLLAR) {
        cout << "Tong so tien ban nhap nho hon 1 do la." << endl;
    } else {
        cout << "Tong so tien ban nhap lon hon 1 do la." << endl;
    }

    return 0;
}