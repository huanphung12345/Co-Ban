/* 12. Celsius to Fahrenheit (Bắt buộc)
Viết một chương trình chuyển đổi giá trị giữa hai đơn vị đo nhiệt độ là Celsius và 
Fahrenheit. Với công thức chuyển đổi là 
Trong đó F là nhiệt độ trong đơn vị Fahrenheit, và C là nhiệt độ trong đơn vị Celsius. */
#include <iostream>
using namespace std;
int main() {
    double celsius, fahrenheit;

    // Nhập nhiệt độ Celsius từ người dùng
    cout << "Nhap nhiet do Celsius: ";
    cin >> celsius;

    // Tính nhiệt độ Fahrenheit
    fahrenheit = (9.0 / 5.0) * celsius + 32;

    // Hiển thị kết quả
    cout << "Nhiet do Fahrenheit: " << fahrenheit << endl;

    return 0;
}