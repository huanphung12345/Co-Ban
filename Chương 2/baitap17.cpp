/* 17. Gia sư toán
Viết một chương trình có thể sử dụng như một gia sư về toán cho các bạn nhỏ. 
Chương trình sẽ hiển thị hai số ngẫu nhiên để thực hiện phép cộng, ví dụ:
Sau đó chương trình sẽ dừng lại trong khi học sinh thực hiện việc tính toán. Khi học 
sinh đã sẵn sàng để kiểm tra đáp án, họ có thể nhấn một phím bất kỳ để chương trình 
hiển thị kết quả chính xác. */
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    // Khởi tạo bộ sinh số ngẫu nhiên
    srand(static_cast<unsigned int>(time(0)));

    // Tạo hai số ngẫu nhiên trong khoảng từ 1 đến 100
    int num1 = rand() % 100 + 1;
    int num2 = rand() % 100 + 1;

    // Hiển thị phép cộng
    cout << "Tính tổng của hai số sau: " << num1 << " + " << num2 << endl;
    cout << "Nhấn phím bất kỳ khi bạn đã sẵn sàng để kiểm tra đáp án..." << endl;

    // Chờ người dùng nhấn phím
    cin.get();

    // Tính và hiển thị kết quả
    int result = num1 + num2;
    cout << "Kết quả chính xác là: " << result << endl;

    return 0;
}