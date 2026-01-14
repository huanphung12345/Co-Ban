/* 18. Trò chơi Tic-Tac-Toe
Viết một chương trình cho phép hai người chơi cùng chơi trò tic-tac-toe. Sử dụng mảng 
ký tự hai chiều với ba hàng và ba cột làm bảng trò chơi. Mỗi phần tử của mảng phải 
được khởi tạo bằng dấu hoa thị (*). Chương trình sẽ chạy vòng lặp sau:
− Hiển thị nội dung của mảng biểu diễn trò chơi
− Cho phép người chơi 1 chọn một vị trí trên bảng để điền X. Chương trình yêu 
cầu người dùng nhập số hàng và cột.
− Cho phép người chơi 2 chọn một vị trí trên bàn cờ để điền O. Chương trình sẽ
yêu cầu người dùng nhập số hàng và cột.
− Xác định xem liệu một người chơi đã thắng hay trò chơi đã hoà. Nếu một người 
chơi đã thắng, chương trình sẽ tuyên bố người đó là người chiến thắng và kết 
thúc. Nếu tình huống hòa đã xảy ra, chương trình cũng hiển thị một thông báo 
tương ứng rồi kết thúc.
Người chơi 1 thắng khi có ba chữ X liên tiếp trên bảng trò chơi. Các chữ X này có thể
xuất hiện trong một hàng, trong một cột hoặc theo đường chéo trên bảng. Người chơi 2 
thắng khi có ba chứ O liên tiếp trên bảng trò chơi. Các chữ O này có thể xuất hiện trong 
một hàng, trong một cột hoặc theo đường chéo trên bảng. Tình huống hòa xảy ra khi 
tất cả các vị trí trên bàn cờ đã đầy đủ, nhưng không có ai chiến thắng. */
#include <iostream>
using namespace std;
void hienThiBanCo(char banCo[3][3]) {
    cout << "  0 1 2\n";
    for (int i = 0; i < 3; i++) {
        cout << i << " ";
        for (int j = 0; j < 3; j++) {
            cout << banCo[i][j] << " ";
        }
        cout << endl;
    }
}
bool kiemTraThang(char banCo[3][3], char kyTu) {
    for (int i = 0; i < 3; i++) {
        if (banCo[i][0] == kyTu && banCo[i][1] == kyTu && banCo[i][2] == kyTu)
            return true;
        if (banCo[0][i] == kyTu && banCo[1][i] == kyTu && banCo[2][i] == kyTu)
            return true;
    }
    if (banCo[0][0] == kyTu && banCo[1][1] == kyTu && banCo[2][2] == kyTu)
        return true;
    if (banCo[0][2] == kyTu && banCo[1][1] == kyTu && banCo[2][0] == kyTu)
        return true;
    return false;
}
bool kiemTraHoa(char banCo[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (banCo[i][j] == '*')
                return false;
        }
    }
    return true;
}
int main() {
    char banCo[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            banCo[i][j] = '*';
        }
    }
    char nguoiChoi1 = 'X';
    char nguoiChoi2 = 'O';
    while (true) {
        hienThiBanCo(banCo);
        int hang, cot;
        cout << "Nguoi choi 1 (X), nhap hang va cot: ";
        cin >> hang >> cot;
        if (hang < 0 || hang > 2 || cot < 0 || cot > 2 || banCo[hang][cot] != '*') {
            cout << "Vi tri khong hop le. Thu lai.\n";
            continue;
        }
        banCo[hang][cot] = nguoiChoi1;
        if (kiemTraThang(banCo, nguoiChoi1)) {
            hienThiBanCo(banCo);
            cout << "Nguoi choi 1 (X) thang!\n";
            break;
        }
        if (kiemTraHoa(banCo)) {
            hienThiBanCo(banCo);
            cout << "Tro choi hoa!\n";
            break;
        }
        hienThiBanCo(banCo);
        cout << "Nguoi choi 2 (O), nhap hang va cot: ";
        cin >> hang >> cot;
        if (hang < 0 || hang > 2 || cot < 0 || cot > 2 || banCo[hang][cot] != '*') {
            cout << "Vi tri khong hop le. Thu lai.\n";
            continue;
        }
        banCo[hang][cot] = nguoiChoi2;
        if (kiemTraThang(banCo, nguoiChoi2)) {
            hienThiBanCo(banCo);
            cout << "Nguoi choi 2 (O) thang!\n";
            break;
        }
        if (kiemTraHoa(banCo)) {
            hienThiBanCo(banCo);
            cout << "Tro choi hoa!\n";
            break;
        }
    }
    return 0;
}