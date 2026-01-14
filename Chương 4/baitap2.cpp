/* 2. Các ký tự mã ASCII
Viết chương trình sử dụng vòng lặp để hiển thị các ký tự cho các mã ASCII từ 0 đến
127. Hiển thị 16 ký tự trên mỗi dòng. */
#include <iostream>
using namespace std;
int main() {
    const int CHAR_PER_LINE = 16;
    for (int i = 0; i <= 127; ++i) {
        cout << static_cast<char>(i) << ' ';
        if ((i + 1) % CHAR_PER_LINE == 0) {
            cout << endl;
        }
    }
    return 0;
}