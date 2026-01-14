/* 24. Xử lý số - Sử dụng tệp (Bắt buộc)
Các bạn có thể lấy file random.txt trong tệp đính kèm trên trang elearning của bài tập.
Tệp này chứa một danh sách dài các số ngẫu nhiên. Sao chép tệp vào hệ thống của
bạn, sau đó viết chương trình mở tệp, đọc tất cả các số từ tệp và tính toán những điều
sau:
A. Số lượng các số trong tệp
B. Tổng của tất cả các số trong tệp
C. Giá trị trung bình của tất cả các số trong tệp
Chương trình sẽ hiển thị số lượng các số được tìm thấy trong tệp, tổng các số và giá trị
trung bình của các số */
#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ifstream inputFile("random.txt");
    if (!inputFile) {
        cerr << "Không thể mở tệp random.txt" << endl;
        return 1;
    }

    int number;
    int count = 0;
    double sum = 0.0;

    while (inputFile >> number) {
        sum += number;
        count++;
    }

    inputFile.close();

    if (count == 0) {
        cout << "Tệp không chứa số nào." << endl;
    } else {
        double average = sum / count;
        cout << "Số lượng các số trong tệp: " << count << endl;
        cout << "Tổng của tất cả các số trong tệp: " << sum << endl;
        cout << "Giá trị trung bình của tất cả các số trong tệp: " << average << endl;
    }

    return 0;
}