/* 6. Điều chỉnh các thành phần (Bắt buộc)
Công thức làm bánh với các thành phần như sau:
− 1.5 cốc đường
− 1 cốc bơ
− 2.75 cốc bột
Với các phần như trên cho ra 48 chiếc bánh. Bạn hãy viết một chương trình yêu cầu 
người dùng nhập số lượng chiếc bánh mà họ muốn làm, sau đó hiển thị ra tỉ lệ của 
các thành phần theo công thức trên để đủ làm được số chiếc bánh mà họ muốn. */
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    const double SUGAR_PER_48 = 1.5; // cốc đường cho 48 chiếc bánh
    const double BUTTER_PER_48 = 1.0; // cốc bơ cho 48 chiếc bánh
    const double FLOUR_PER_48 = 2.75; // cốc bột cho 48 chiếc bánh
    const int BATCH_SIZE = 48; // số chiếc bánh trong công thức gốc

    int desired_cakes;
    double sugar_needed, butter_needed, flour_needed;

    // Yêu cầu người dùng nhập số lượng chiếc bánh muốn làm
    cout << "Nhap so luong chiec banh muon lam: ";
    cin >> desired_cakes;

    // Tính lượng thành phần cần thiết dựa trên số bánh mong muốn
    sugar_needed = (SUGAR_PER_48 / BATCH_SIZE) * desired_cakes;
    butter_needed = (BUTTER_PER_48 / BATCH_SIZE) * desired_cakes;
    flour_needed = (FLOUR_PER_48 / BATCH_SIZE) * desired_cakes;

    // Hiển thị kết quả với định dạng fixed-point, 2 chữ số thập phân
    cout << fixed << setprecision(2);
    cout << "De lam " << desired_cakes << " chiec banh, can:" << endl;
    cout << "- Duong: " << sugar_needed << " coc" << endl;
    cout << "- Bo: " << butter_needed << " coc" << endl;
    cout << "- Bot: " << flour_needed << " coc" << endl;

    return 0;
}