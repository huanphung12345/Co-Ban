/* 8. Lo Shu Magic Square (Hình vuông kỳ ảo Lạc Thư) 
Lo Shu Magic Square là một lưới có 3 hàng và 3 cột được thể hiện trong Hình 7-19. Lo 
Shu Magic Square có các thuộc tính sau:
Lưới chứa chính xác là các số từ 1 đến 9.
Tổng của mỗi hàng, mỗi cột và mỗi đường chéo đều cộng lại ra bằng nhau - được
minh hoạ trong Hình 7-20
Trong chương trình, bạn có thể mô phỏng hình vuông ma thuật trên bằng cách sử dụng 
một mảng hai chiều. Viết một hàm chấp nhận một mảng hai chiều làm đối số và xác 
định xem mảng đó có phải là một Lo Shu Magic Square hay không. Kiểm tra chức năng
hàm này trong chương trình. */
#include <iostream>
using namespace std;
const int SIZE = 3;
bool isLoShuMagicSquare(int square[SIZE][SIZE]) {
    int magicSum = 15; // Tổng kỳ ảo cho Lo Shu Magic Square
    int rowSum, colSum, diagSum1 = 0, diagSum2 = 0;
    bool numbers[10] = { false }; // Mảng để kiểm tra các số từ 1 đến 9

    for (int i = 0; i < SIZE; i++) {
        rowSum = 0;
        colSum = 0;
        for (int j = 0; j < SIZE; j++) {
            // Kiểm tra số hợp lệ và đánh dấu
            if (square[i][j] < 1 || square[i][j] > 9 || numbers[square[i][j]]) {
                return false;
            }
            numbers[square[i][j]] = true;

            rowSum += square[i][j];
            colSum += square[j][i];

            if (i == j) {
                diagSum1 += square[i][j];
            }
            if (i + j == SIZE - 1) {
                diagSum2 += square[i][j];
            }
        }
        if (rowSum != magicSum || colSum != magicSum) {
            return false;
        }
    }
    if (diagSum1 != magicSum || diagSum2 != magicSum) {
        return false;
    }
    return true;
}
int main() {
    int square[SIZE][SIZE];

    cout << "Nhap cac phan tu cho Lo Shu Magic Square (3x3):" << endl;
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cin >> square[i][j];
        }
    }

    if (isLoShuMagicSquare(square)) {
        cout << "Day la Lo Shu Magic Square." << endl;
    } else {
        cout << "Day khong phai la Lo Shu Magic Square." << endl;
    }

    return 0;
}