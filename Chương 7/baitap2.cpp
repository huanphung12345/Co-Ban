/* 2. Người trúng xổ số
Một người mua vé số mua mười vé một tuần, luôn chơi cùng lúc mười vé, mỗi số gồm
5 chữ số “may mắn”. Viết chương trình khởi tạo một mảng hoặc một vectơ với các số
như phía dưới. Sau đó cho phép người chơi nhập 1 số có 5 chữ số trúng thưởng của 
tuần này. Chương trình sẽ thực hiện tìm kiếm tuyến tính trong danh sách các số của 
người chơi và báo cáo xem một trong các vé có trúng thưởng hay không trong tuần này. 
13579 26791 26792 33445 55555
62483 77777 79422 85647 93121 */
#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> soXoSo = {13579, 26791, 26792, 33445, 55555,
                          62483, 77777, 79422, 85647, 93121};
    int soTrungThuong;
    cout << "Nhap so trung thuong (5 chu so): ";
    cin >> soTrungThuong;

    bool trungThuong = false;
    for (int so : soXoSo) {
        if (so == soTrungThuong) {
            trungThuong = true;
            break;
        }
    }

    if (trungThuong) {
        cout << "Chuc mung! Ban da trung thuong!" << endl;
    } else {
        cout << "Rất tiếc, bạn không trúng thưởng." << endl;
    }

    return 0;
}