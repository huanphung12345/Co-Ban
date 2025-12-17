/* 9. Kích thước kiểu dữ liệu
Bạn được giao công việc của một lập trình viên trong Cyborg supercomputer. Một 
trong các bước để hoàn thành các công việc tính toán là bạn cần phải biết được các 
kiểu dữ liệu sẽ sử dụng sau đây có kích thước bao nhiêu byte: kiểu char, kiểu int, kiểu 
float, và kiểu double. Tuy nhiên bạn lại không có bất kỳ tài liệu kĩ thuật nào để tra cứu 
thông tin này cả. Hãy viết chương trình C++ để xác định xem không gian bộ nhớ cần 
cho việc chứa các kiểu dữ liệu này là bao nhiêu và hiển thị chúng ta màn hình. */
#include <iostream>
using namespace std;
int main() {
    cout << "Kich thuoc cua kieu char: " << sizeof(char) << " byte" << endl;
    cout << "Kich thuoc cua kieu int: " << sizeof(int) << " byte" << endl;
    cout << "Kich thuoc cua kieu float: " << sizeof(float) << " byte" << endl;
    cout << "Kich thuoc cua kieu double: " << sizeof(double) << " byte" << endl;
    return 0;
}