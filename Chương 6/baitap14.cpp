/* 14. Ứng dụng xổ số
Viết chương trình mô phỏng một cuộc thi xổ số. Chương trình cần dùng một mảng gồm 
năm số nguyên được đặt tên là lottery và cần tự sinh ra một số ngẫu nhiên trong khoảng 
từ 0 đến 9 cho mỗi phần tử trong mảng này. Người dùng cũng phải nhập năm chữ số, 
số này sẽ được lưu trữ trong một mảng số nguyên khác có tên là user. Chương trình sẽ
so sánh các phần tử tương ứng trong hai mảng và lưu số lượng số so khớp. Ví dụ: dưới 
đây là mảng lottery và mảng user với các các số mẫu cho trước. Ta thấy, ở đây có hai 
chữ số so khớp (phần tử 2 và 4).
− Mảng lottery:
− Mảng user:
Chương trình cần hiển thị các số ngẫu nhiên đã được tạo ra và trong mảng lottery, cùng 
số chữ số so khớp. Nếu tất cả các chữ số đều khớp, hiển thị thông báo người đã thắng 
giải độc đắc. */
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    const int SIZE = 5;
    int lottery[SIZE];
    int user[SIZE];
    int matchCount = 0;

    // Khởi tạo bộ sinh số ngẫu nhiên
    srand(static_cast<unsigned int>(time(0)));

    // Tạo mảng lottery với các số ngẫu nhiên từ 0 đến 9
    for (int i = 0; i < SIZE; i++) {
        lottery[i] = rand() % 10;
    }

    // Nhập mảng user từ người dùng
    cout << "Nhap " << SIZE << " so nguyen tu 0 den 9:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "So thu " << (i + 1) << ": ";
        cin >> user[i];
    }

    // So sánh hai mảng và đếm số chữ số khớp
    for (int i = 0; i < SIZE; i++) {
        if (lottery[i] == user[i]) {
            matchCount++;
        }
    }

    // Hiển thị kết quả
    cout << "Cac so trong mang lottery la: ";
    for (int i = 0; i < SIZE; i++) {
        cout << lottery[i] << " ";
    }
    cout << endl;

    cout << "So chu so khop: " << matchCount << endl;
    if (matchCount == SIZE) {
        cout << "Chuc mung! Ban da trung giai doc dac!" << endl;
    }

    return 0;
}