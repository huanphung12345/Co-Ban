/* 18. Tính gram chất béo
Viết một chương trình yêu cầu nhập vào tổng lượng calo và gram chất béo trong một
loại thực phẩm. Chương trình sẽ hiển thị phần trăm calo có trong chất béo. Nếu lượng
calo có trong chất béo ít hơn 30% tổng lượng calo của thực phẩm thì hiển thị thông báo
cho biết thực phẩm đó ít chất béo. Biết:
- 1gram chất béo có 9 calo
- Lượng calo trong số gram chất béo = số gram chất béo*9
- Tỷ lệ calo có trong thực phẩm = Lượng calo trong số gram chất béo / Tổng lượng calo
Xác nhận đầu vào: Đảm bảo số lượng calo và gram chất béo không nhỏ hơn 0. Ngoài
ra, số lượng calo từ chất béo không được lớn hơn tổng số calo (Số gram chất béo*9
Trường Đại học Đại Nam Khoa Công nghệ thông tin
Trang | 6
phải nhỏ hơn Tổng lượng calo). Nếu điều đó xảy ra, hãy hiển thị thông báo lỗi cho biết
rằng số gram calo hoặc chất béo đã được nhập không chính xác */
#include <iostream>
using namespace std;
int main() {
    double totalCalories, fatGrams;

    // Nhập tổng lượng calo
    cout << "Nhap tong luong calo: ";
    cin >> totalCalories;

    // Nhập gram chất béo
    cout << "Nhap so gram chat beo: ";
    cin >> fatGrams;

    // Kiểm tra đầu vào
    if (totalCalories < 0 || fatGrams < 0) {
        cout << "Loi: So luong calo va gram chat beo phai lon hon hoac bang 0." << endl;
        return 1;
    }

    double caloriesFromFat = fatGrams * 9;

    if (caloriesFromFat > totalCalories) {
        cout << "Loi: So gram chat beo nhap khong chinh xac." << endl;
        return 1;
    }

    // Tính tỷ lệ calo từ chất béo
    double fatCaloriePercentage = (caloriesFromFat / totalCalories) * 100;

    // Hiển thị kết quả
    cout << "Ty le calo tu chat beo: " << fatCaloriePercentage << "%" << endl;

    if (fatCaloriePercentage < 30) {
        cout << "Thuc pham nay it chat beo." << endl;
    }

    return 0;
}