/* 20. Trò chơi đoán số ngẫu nhiên:
Viết chương trình tạo một số ngẫu nhiên và yêu cầu người dùng đoán số đó là gì. Nếu
dự đoán của người dùng cao hơn số ngẫu nhiên, chương trình sẽ hiển thị "Rất cao, hãy
thử lại!" Nếu dự đoán của người dùng thấp hơn số ngẫu nhiên, chương trình sẽ hiển thị
Trường Đại học Đại Nam Khoa Công nghệ thông tin
Trang | 7
"Rất thấp, hãy thử lại!" Chương trình nên sử dụng một vòng lặp lặp lại cho đến khi
người dùng đoán đúng số ngẫu nhiên */
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    srand(static_cast<unsigned int>(time(0))); // Khởi tạo bộ sinh số ngẫu nhiên
    int randomNumber = rand() % 100 + 1; // Tạo số ngẫu nhiên từ 1 đến 100
    int userGuess;

    cout << "Chao mung den voi tro choi doan so!" << endl;
    cout << "Toi da chon mot so ngau nhien tu 1 den 100. Hay doan xem no la so nao!" << endl;

    do {
        cout << "Nhap du doan cua ban: ";
        cin >> userGuess;

        if (userGuess > randomNumber) {
            cout << "Rat cao, hay thu lai!" << endl;
        } else if (userGuess < randomNumber) {
            cout << "Rat thap, hay thu lai!" << endl;
        } else {
            cout << "Chuc mung! Ban da doan dung so!" << endl;
        }
    } while (userGuess != randomNumber);

    return 0;
}