/* 8. Trộn màu
Ba màu cơ bản trong một chế độ màu nào đó là red, blue, và yellow. Khi trộn từng cặp
2 màu ta sẽ có:
− red + blue → purple (màu tím)
− red + yellow → orange (màu cam)
− blue + yellow → green (màu xanh lá cây)
Viết chương trình yêu cầu nhập tên 2 màu cơ bản, in ra màu kết quả khi pha trộn chúng.
Nếu người dùng nhập không đúng màu cơ bản thì thông báo lỗi */
#include <iostream>
#include <string>
using namespace std;
int main() {
    string color1, color2;
    cout << "Nhap vao hai mau co ban (red, blue, yellow): ";
    cin >> color1 >> color2;

    if ((color1 == "red" && color2 == "blue") || (color1 == "blue" && color2 == "red")) {
        cout << "Mau ket qua khi tron: purple" << endl;
    } else if ((color1 == "red" && color2 == "yellow") || (color1 == "yellow" && color2 == "red")) {
        cout << "Mau ket qua khi tron: orange" << endl;
    } else if ((color1 == "blue" && color2 == "yellow") || (color1 == "yellow" && color2 == "blue")) {
        cout << "Mau ket qua khi tron: green" << endl;
    } else {
        cout << "Loi: Vui long nhap dung mau co ban (red, blue, yellow)." << endl;
    }

    return 0;
}