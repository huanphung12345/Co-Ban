/* 10. Số dặm trên mỗi gallon
Một chiếc xe ô tô có thể chứa được 15 gallon xăng và có thể di chuyển được 375 
dặm trước khi cần nạp lại. Viết chương trình tính toán số dặm trên mỗi gallon mà xe 
có thể đi được. Hiển thị nó ra màn hình. */
#include <iostream>
using namespace std;
int main() {
    const double gallons = 15.0;
    const double miles = 375.0;
    double miles_per_gallon = miles / gallons;
    cout << "So dam tren moi gallon: " << miles_per_gallon << " dặm/gallon" << endl;
    return 0;
}