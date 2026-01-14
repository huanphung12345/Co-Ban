/* 13. Lớn nhất và nhỏ nhất trong các số
Viết một chương trình với một vòng lặp cho phép người dùng nhập một dãy các số
nguyên cho đến khi người dùng nhập vào số -99. Sau khi tất cả các số đã được nhập,
chương trình sẽ hiển thị các số lớn nhất và nhỏ nhất đã nhập */
#include <iostream>
#include <limits>
using namespace std;
int main() {
    int number;
    int maxNumber = numeric_limits<int>::min(); // Khởi tạo giá trị lớn nhất
    int minNumber = numeric_limits<int>::max(); // Khởi tạo giá trị nhỏ nhất

    cout << "Nhap cac so nguyen (nhap -99 de ket thuc): " << endl;

    while (true) {
        cin >> number;
        if (number == -99) {
            break; // Kết thúc vòng lặp khi nhập -99
        }
        if (number > maxNumber) {
            maxNumber = number; // Cập nhật số lớn nhất
        }
        if (number < minNumber) {
            minNumber = number; // Cập nhật số nhỏ nhất
        }
    }

    if (maxNumber == numeric_limits<int>::min() && minNumber == numeric_limits<int>::max()) {
        cout << "Khong co so nao duoc nhap." << endl;
    } else {
        cout << "So lon nhat: " << maxNumber << endl;
        cout << "So nho nhat: " << minNumber << endl;
    }

    return 0;
}