/* 1. Số dặm trên mỗi Gallon (Bắt buộc)
Viết chương trình tính toán mức tiêu thụ xăng của ô tô. Chương trình này sẽ yêu cầu 
người dùng nhập số gallon xăng xe có thể chứa, và nhập số dặm nó có thể đi được khi 
được đổ đầy xăng. Sau đó nó sẽ hiển thịsố dặm có thể được lái đi trên mỗi gallon xăng. */
#include <iostream>
using namespace std;
int main() {
    double gallons, miles, miles_per_gallon;

    // Yêu cầu người dùng nhập số gallon xăng
    cout << "Nhap so gallon xang: ";
    cin >> gallons;

    // Yêu cầu người dùng nhập số dặm có thể đi được
    cout << "Nhap so dặm có thể đi được: ";
    cin >> miles;

    // Tính số dặm trên mỗi gallon
    if (gallons != 0) {
        miles_per_gallon = miles / gallons;
        // Hiển thị kết quả
        cout << "So dặm trên mỗi gallon: " << miles_per_gallon << endl;
    } else {
        cout << "Lỗi: Số gallon không thể là 0." << endl;
    }

    return 0;
}