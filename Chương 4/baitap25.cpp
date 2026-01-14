/* 25. Sử dụng file – Xếp hàng học sinh
Sửa đổi chương trình Đội hình sinh viên được mô tả trong Bài 14 để chương trình lấy
tên từ tệp. Tên nên được đọc cho đến khi không còn dữ liệu để đọc. Có thể sử dụng file
lineUp.txt trong tệp đính kèm trên trang elearning của bài tập */
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    ifstream inputFile("lineUp.txt");
    if (!inputFile) {
        cerr << "Không thể mở tệp lineUp.txt" << endl;
        return 1;
    }

    string name;
    cout << "Danh sách học sinh xếp hàng:" << endl;
    while (getline(inputFile, name)) {
        cout << name << endl;
    }

    inputFile.close();
    return 0;
}