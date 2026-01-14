/* 11. Gia sư toán (Bắt buộc)
Viết một chương trình có thể sử dụng như một gia sư về toán cho các bạn nhỏ. Chương
trình sẽ hiển thị hai số ngẫu nhiên để thực hiện phép cộng, ví dụ:
Sau đó chờ người dùng nhập tổng của 2 số trên. Nếu kết quả đúng thì thông báo chúc
mừng. Nếu sai thì thông báo kết quả không chính xác và kết quả đúng là bao nhiêu. */
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    // Khởi tạo bộ sinh số ngẫu nhiên
    srand(static_cast<unsigned int>(time(0)));

    // Sinh hai số ngẫu nhiên trong khoảng từ 0 đến 100
    int num1 = rand() % 101;
    int num2 = rand() % 101;

    // Hiển thị câu hỏi cho người dùng
    cout << "Tính tổng của hai số sau: " << num1 << " + " << num2 << " = ?" << endl;

    // Nhận kết quả từ người dùng
    int userAnswer;
    cout << "Nhập kết quả của bạn: ";
    cin >> userAnswer;

    // Tính tổng đúng
    int correctAnswer = num1 + num2;

    // Kiểm tra kết quả và thông báo
    if (userAnswer == correctAnswer) {
        cout << "Chúc mừng! Kết quả của bạn đúng." << endl;
    } else {
        cout << "Kết quả không chính xác. Kết quả đúng là: " << correctAnswer << endl;
    }

    return 0;
}