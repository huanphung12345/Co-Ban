/* 5. Để có được giá trị trung bình của một loạt các giá trị, bạn cộng các giá trị lại sau đó 
chia cho tổng số các giá trị đếm được. Viết một chương trình để lưu trữ các giá trị
sau trong năm biến khác nhau: 28, 32, 37, 24, và 33. Chương trình trước hết phải 
tính được tổng của năm biến và lưu kết quả vào trong một biệt sum riêng biệt. Sau 
đó, chương trình lấy biến sum chia cho 5 để lấy được giá trị trung bình. Hiển thị nó 
giá trị trung bình ra màn hình.
Gợi ý: Nên sử dụng kiểu dữ liệu double cho các biến trong chương trình. */
#include <iostream>
using namespace std;
int main() {
    double a = 28.0;
    double b = 32.0;
    double c = 37.0;
    double d = 24.0;
    double e = 33.0;

    double sum = a + b + c + d + e;
    double average = sum / 5.0;

    cout << "Gia tri trung binh: " << average << endl;

    return 0;
}