/* 18. Biểu đồ cột dân số (Bắt buộc)
Viết một chương trình tạo ra một biểu đồ thanh thể hiện sự gia tăng dân số của
Prairieville, một thị trấn nhỏ ở giữa phía Tây của Hoa kỳ, với khoảng thời gian 20 năm
trong suốt 100 năm qua. Chương trình sẽ đọc các số liệu dân số (làm tròn đến 1.000
người gần nhất) cho các năm 1900, 1920, 1940, 1960, 1980 và 2000 từ một tệp. Mỗi
năm, nó sẽ hiển thị năm và một thanh là các kí tự hoa thị ‘*’, mỗi dấu hoa thị ‘*’ tương
ứng với 1.000 người. Dữ liệu có thể được tìm thấy trong tệp People.txt.
(Có thể lấy tệp People.txt trong tệp đính kèm trên trang elearning của bài tập)
Dưới đây là một ví dụ về cách biểu đồ có thể bắt đầu:
TĂNG TRƯỞNG DÂN SỐ PRAIRIEVILLE
(Mỗi kí tự ‘*’ đại diện cho 1.000 người)
1900 **
1920 ****
1940 ****/
#include <iostream>
#include <fstream>
using namespace std;
int main() {
    const int NUM_YEARS = 6;
    const int years[NUM_YEARS] = {1900, 1920, 1940, 1960, 1980, 2000};
    int populations[NUM_YEARS];

    // Mở tệp để đọc dữ liệu dân số
    ifstream inputFile("People.txt");
    if (!inputFile) {
        cerr << "Khong the mo tep People.txt" << endl;
        return 1;
    }

    // Đọc dân số từ tệp
    for (int i = 0; i < NUM_YEARS; ++i) {
        inputFile >> populations[i];
    }
    inputFile.close();

    // Hiển thị biểu đồ cột dân số
    cout << "TANG TRUONG DAN SO PRAIRIEVILLE\n";
    cout << "(Moi ki tu '*' dai dien cho 1.000 nguoi)\n";

    for (int i = 0; i < NUM_YEARS; ++i) {
        cout << years[i] << " ";
        int num_stars = populations[i] / 1000;
        for (int j = 0; j < num_stars; ++j) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}