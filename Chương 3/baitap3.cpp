/* 3. Ngày phép thuật (Bắt buộc)
Ngày 10 tháng 6 năm 1960 được viết dưới dạng 6/10/60 có đặc điểm là tháng nhân với
ngày thì bằng năm (chỉ tính 2 chữ số cuối của năm) thì được coi là ngày phép thuật
Viết chương trình yêu cầu người dùng nhập vào ngày, tháng, năm (chỉ nhập 2 chữ số
cuối). In ra ngày đó có phải là ngày phép thuật không? */
#include <iostream>
using namespace std;
int main() {
    int day, month, year;
    cout << "Nhap vao ngay (1-31): ";
    cin >> day;
    cout << "Nhap vao thang (1-12): ";
    cin >> month;
    cout << "Nhap vao nam (2 chu so cuoi): ";
    cin >> year;

    if (month * day == year) {
        cout << "Ngay " << day << "/" << month << "/" << year << " la ngay phep thuat." << endl;
    } else {
        cout << "Ngay " << day << "/" << month << "/" << year << " khong phai la ngay phep thuat." << endl;
    }

    return 0;
}